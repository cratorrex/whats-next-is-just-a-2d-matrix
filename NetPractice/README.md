*This project has been created as part of the 42 curriculum by thtay.*

# Description
#### NetPractice - <span title="a description was not provided in the subject">Route to your table.</span> <span title="so, I might as well get creative">Route to your virtual local area network.</span> <span title="with how we do these things right?">Route home.</span> <span title="I don't know... let's just have fun.">Disregard all previous teachings,</span> <span title="If you notice the alt texts here, good. The evaluation may proceed.">launch Excel.</span>

<small><small>Disregarding the fact that I have previously learnt about subnet routing, what is this project all about?</small></small>
<hr/>

Don't we all remember the days of old, where we had this very innovative piece of technology called IPv4? Well, what is it?

Well, simply put, it's a way for devices to communicate with each other through their identifying numbers.  
IP addresses are typically split into 4 groups of 8 bits, otherwise known as octets (or bytes), used to identify the device that is trying to communicate (from or with).

Bits|0|1|2|3|4|5|6|7|8
-|-|-|-|-|-|-|-|-|-
Binary (Bit Val)|00000000|00000001|00000010|00000100|00001000|00010000|00100000|01000000|10000000
Decimal (Bit Val)|0|1|2|4|8|16|32|64|128
|
Binary|00000000|00000001|00000011|00000111|00001111|00011111|00111111|01111111|11111111
Decimal|0|1|3|7|15|31|63|127|255
|
Binary Mask|00000000|10000000|11000000|11100000|11110000|11111000|11111100|11111110|11111111
Subnet Mask|0|128|192|224|240|248|252|254|255

## Levels
### Level 1
A very simple level. A sandbox, essentially. Just match the address within the allocated subnet.
### Level 2
We reach a rather unique problem in this level. The given `127` heads are invalid IP addresses. Why? Well, those are considered `Reserved IP Addresses`.
### Level 3
All hosts want to communicate alternatively. Not much different than a normal exercise.
### Level 4
What's a `/27`? Well that's just shorthand for the Subnet mask `255.255.255.224`. (I actually had to make the table for this, to reference from...)  
Regardless, this still needs to adhere to the router's subnet mask.


## Submission Details
The 10 exported Configuration files, as `.json` files, are located at the project's root.

# Instructions

# Resources
The TCP/IP Guide - a book found in the campus library, [but also (mostly) available online via Google Books (!?)](https://books.google.com.sg/books?id=Pm4RgYV2w4YC&printsec=frontcover). &nbsp; &nbsp; .::<button title="Specifically, Chapter 13, if you want to cut to the chase,">:3</button> <button title="and this goes down to chapter 19.">:9</button>::.

[List of reserved IP addresses - Wikipedia](https://en.wikipedia.org/wiki/List_of_reserved_IP_addresses)