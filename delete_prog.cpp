/*
* Reference: https://www.programiz.com/cpp-programming/library-function/cstdio/remove#:~:text=The%20remove%20%28%29%20function%20in%20C%2B%2B%20deletes%20a,the%20behaviour%20of%20remove%20%28%29%20function%20is%20implementation-defined.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char filename[] = "path_to_file/filename";
	
	// deletes the file if it exists
	int result = remove(filename);

	// check if file has been deleted successfully
	if (result != 0) {
	// print error message
	cerr << "File deletion failed"<<endl;
	}
	else {
	cout << "File deleted successfully"<<endl;
	}
	
	return 0;
}
