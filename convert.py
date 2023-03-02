import argparse
import csv
import json
import xml.etree.ElementTree as ET

# Define the command line arguments
parser = argparse.ArgumentParser()
parser.add_argument('filename', help='The name of the input file')
parser.add_argument('format', help='The output format: csv, json, or xml')
args = parser.parse_args()

# Read the data from the input file
with open(args.filename, 'r') as file:
    data = [line.strip().split('\t') for line in file.readlines()]

# Convert the data to the desired format
if args.format == 'csv':
    with open('output.csv', 'w', newline='') as file:
        writer = csv.writer(file)
        writer.writerows(data)
elif args.format == 'json':
    with open('output.json', 'w') as file:
        json.dump(data, file)
elif args.format == 'xml':
    root = ET.Element('data')
    for row in data:
        item = ET.SubElement(root, 'row')
        for index, value in enumerate(row):
            subitem = ET.SubElement(item, f'column{index}')
            subitem.text = value
    tree = ET.ElementTree(root)
    tree.write('output.xml', encoding='utf-8', xml_declaration=True)
else:
    print(f'Invalid format: {args.format}')
