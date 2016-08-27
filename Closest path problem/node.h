#pragma once

struct node {
	node* forward;
	node* backward;
	int value;
};