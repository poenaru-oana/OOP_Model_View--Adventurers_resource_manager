# OOP_Model_View--Adventurers_resource_manager

The requirements guiding the implementation of this project:

	- each adventurer has `name`, `amount of gold`, `type of kit` (lightblue, orange, beige, silver), which each contains certain items
 	- an item has `name`, `price`, `type` (common, uncommon, rare), and a `bag` to which it belongs (if the field is empty, the item is available to add)
	- each quest has `name` and `reward`. 

All this information is read from files at startup.

GUI requirements:

	- the window will have the adventurer's name
	- adventurer windows are colored like the kit they were assigned
	- their gold amount is displayed in the window, and is updating in real time
	- an adventurer can see all available items (in a table view)
	- checking a checkbox will filter only the objects in their kit
	- additional checkbox to filter the items they can add to the starting kit with their current amount of gold. The items will be sorted ascending by price
	- an adventurer can update the rarity of an item they have in their kit through the GUI
	- button to access the quests window. Upon the completion of a quest, it is removed from the list
	- 

When a modification is made, everyone should be able to see it.
All the modifications should be saved to file upon closing.
 
	This project was developed as practice for the written exam in Object-Oriented Programming course, Semester 2. 