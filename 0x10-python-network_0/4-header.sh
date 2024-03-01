#!/bin/bash
# Send a GET request to a given URL with a header variable
curl -sG "$1" -H "X-School-User-Id: 98"
