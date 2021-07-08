// no 1: ProjectOne for set the graphical window without if else condition also works same 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//
//void main()
//{
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	window = glfwCreateWindow(900, 900, "My First Graphics Window", NULL, NULL);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}




//// no 2: ProjectTwo for set the graphical window 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!"<<endl;
//	}
//	window = glfwCreateWindow(900, 900, "My First Graphics Window", NULL, NULL);
//	if (!window)
//	{
//		cout << "Window not available" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully" << endl;
//	}
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}




////no 3 : background window also assigned variable for window's width & height 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!"<<endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}




//no 4: Drawing in out graphical window

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//	//-0.5f, -0.5f, 0.0f,
//	 //0.5f, -0.5f, 0.0f,
//	 //0.0f,  0.5f, 0.0f
//	 0.3f, 0.3f, 0.0f,
//	 0.9f, 0.3f, 0.0f,
//	 0.9f, 0.9f, 0.0f
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 5: Drawing in out graphical window with own coordinates

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//-0.5f, -0.5f, 0.0f,		//website coordinate
//		 //0.5f, -0.5f, 0.0f,
//		 //0.0f,  0.5f, 0.0f
//		 0.3f, 0.3f, 0.0f,		//own coordinates
//		 0.9f, 0.3f, 0.0f,
//		 0.9f, 0.9f, 0.0f
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 6: Drawing square

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//triangle One
//		 0.3f, 0.3f, 0.0f,
//		 0.9f, 0.3f, 0.0f,
//		 0.9f, 0.9f, 0.0f,
//
//		 //triangle Two
//		 0.9f, 0.9f, 0.0f,
//		 0.3f, 0.9f, 0.0f,
//		 0.3f, 0.3f, 0.0f
//
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 7: making hexagon

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//triangle One
//		 0.0f, 0.0f, 0.0f,		//all positive
//		 0.4f, 0.0f, 0.0f,
//		 0.4f, 0.3f, 0.0f,
//
//		 //triangle two
//		 0.0f, 0.0f, 0.0f,		//all +ve
//		 0.4f, 0.3f, 0.0f,
//		 0.0f, 0.5f, 0.0f,
//
//		 //triangle three			//x -ve
//		 0.0f, 0.0f, 0.0f,
//		-0.4f, 0.0f, 0.0f,
//		-0.4f, 0.3f, 0.0f,
//
//		 //triangle four
//		 0.0f, 0.0f, 0.0f,		//x -ve
//		-0.4f, 0.3f, 0.0f,
//		 0.0f, 0.5f, 0.0f,
//
//		 //triangle five		//both -ve
//         0.0f, 0.0f, 0.0f,
//        -0.4f, -0.0f, 0.0f,
//        -0.4f, -0.3f, 0.0f,
//
//		//triangle six		//both -ve
//		0.0f, 0.0f, 0.0f,
//	   -0.4f, -0.3f, 0.0f,
//		0.0f, -0.5f, 0.0f,
//
//		//triangle seven
//		0.0f, 0.0f, 0.0f,		//y -ve
//		0.4f, 0.0f, 0.0f,
//		0.4f, -0.3f, 0.0f,
//
//		//triangle eight
//		0.0f, 0.0f, 0.0f,		//y -ve
//		0.4f, -0.3f, 0.0f,
//		0.0f, -0.5f, 0.0f
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 24);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 8: making hex and triangles in corner

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//triangle One
//		 0.0f, 0.0f, 0.0f,		//all positive
//		 0.4f, 0.0f, 0.0f,
//		 0.4f, 0.3f, 0.0f,
//
//		 //triangle two
//		 0.0f, 0.0f, 0.0f,		//all +ve
//		 0.4f, 0.3f, 0.0f,
//		 0.0f, 0.5f, 0.0f,
//
//		 //triangle three			//x -ve
//		 0.0f, 0.0f, 0.0f,
//		-0.4f, 0.0f, 0.0f,
//		-0.4f, 0.3f, 0.0f,
//
//		//triangle four
//		0.0f, 0.0f, 0.0f,		//x -ve
//	   -0.4f, 0.3f, 0.0f,
//		0.0f, 0.5f, 0.0f,
//
//		//triangle five		//both -ve
//		0.0f, 0.0f, 0.0f,
//	   -0.4f, -0.0f, 0.0f,
//	   -0.4f, -0.3f, 0.0f,
//
//	   //triangle six		//both -ve
//	   0.0f, 0.0f, 0.0f,
//	  -0.4f, -0.3f, 0.0f,
//	   0.0f, -0.5f, 0.0f,
//
//	   //triangle seven
//	   0.0f, 0.0f, 0.0f,		//y -ve
//	   0.4f, 0.0f, 0.0f,
//	   0.4f, -0.3f, 0.0f,
//
//	   //triangle eight
//	   0.0f, 0.0f, 0.0f,		//y -ve
//	   0.4f, -0.3f, 0.0f,
//	   0.0f, -0.5f, 0.0f
//	};
//
//	float triangleOne[] =
//	{
//		//clockwise //top right triangle
//		0.9f,0.9f,0.0f,//c
//		0.9f,0.6f,0.0f,//b
//		0.5f,0.6f,0.0f //a
//
//	};
//
//	float triangleTwo[] =
//	{
//		//clockwise //top left triangle
//		-0.9f,0.9f,0.0f,//c
//		-0.9f,0.6f,0.0f,//b
//		-0.5f,0.6f,0.0f //a
//
//	};
//
//
//	float triangleThree[] =
//	{
//		//clockwise //bottom right
//		-0.9f,-0.6f,0.0f,//c
//		-0.6f,-0.9f,0.0f,//b
//		-0.9f,-0.9f,0.0f //a
//
//	};
//
//
//	float triangleFour[] =
//	{
//		//clockwise //bottom left
//		0.9f,-0.6f,0.0f,//c
//		0.6f,-0.9f,0.0f,//b
//		0.9f,-0.9f,0.0f //a
//
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 24);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleOne);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleTwo);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleThree);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleFour);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 9: quad or square

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangleOne[] =
//	{
//		//clockwise //top right triangle
//		0.5f,0.5f,0.0f,//c
//		0.5f,0.0f,0.0f,//b
//		0.0f,0.0f,0.0f, //a
//		0.0f,0.5f,0.0f //d
//
//	};
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleOne);
//		glDrawArrays(GL_QUADS, 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//???????no 10: quad or square in different position

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float quadOne[] =
//	{
//		//clockwise //top right triangle
//		-0.5f,-0.5f,0.0f,//c
//		-0.5f,0.0f,0.0f,//b
//		0.0f,0.0f,0.0f, //a
//		0.0f,-0.5f,0.0f //d
//
//	};
//
//	float quadTwo[] =
//	{
//		//clockwise //top right triangle
//		0.5f,0.5f,0.0f,//c
//		0.5f,0.0f,0.0f,//b
//		0.0f,0.0f,0.0f, //a
//		0.0f,0.5f,0.0f //d
//
//	};
//
//	float quadThree[] =
//	{
//		//clockwise //top right triangle
//		0.7f,0.7f,0.0f,//c
//		0.7f,0.0f,0.0f,//b
//		0.0f,0.0f,0.0f, //a
//		0.0f,0.7f,0.0f //d
//
//	};
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, quadOne);
//		glDrawArrays(GL_QUADS, 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, quadTwo);
//		glDrawArrays(GL_QUADS, 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, quadThree);
//		glDrawArrays(GL_QUADS, 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 11: screen resolution for triangle(!!!!!!!must change the drawing vertices according to your width and height)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define S_W 1000 //screen width
//#define S_H 800	//screen height 
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangle[] =
//	{
//		100,100,0,
//		300,100,0,
//		300,300,0
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangle);
//		glDrawArrays(GL_TRIANGLES , 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 12: screen resolution for quad(!!!!!!!must change the drawing vertices according to your width and height)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define S_W 1000 //screen width
//#define S_H 800	//screen height 
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float quad[] =
//	{
//		//only +ve so instead of 0.1 we take 100
//		100,100,0, 
//		300,100,0,
//		300,300,0,
//		100,300,0
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 0.5, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, quad);
//		glDrawArrays(GL_QUADS , 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 13: screen resolution for point(!!!!!!!must change the drawing vertices according to your width and height)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define S_W 1000 //screen width
//#define S_H 800	//screen height 
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float point[] =
//	{
//		//only +ve so instead of 0.1 we take 100
//		S_W/2, S_H/2
//	
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0); //NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 0.5, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glPointSize(20);
//		glVertexPointer(2, GL_FLOAT, 0, point);
//		glDrawArrays(GL_POINTS , 0, 1);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 14: multiple points(!!!!!!!must change the drawing vertices according to your width and height)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define S_W 1000 //screen width
//#define S_H 800	//screen height 
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float point[] =
//	{
//		//only +ve so instead of 0.1 we take 100
//		S_W/2, S_H/2
//	
//	};
//
//	float pointOne[] =
//	{
//		//only +ve so instead of 0.1 we take 100
//		S_W / 4, S_H / 4
//
//	};
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 0.5, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glPointSize(20);
//		glVertexPointer(2, GL_FLOAT, 0, point);
//		glDrawArrays(GL_POINTS , 0, 1);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glPointSize(20);
//		glVertexPointer(2, GL_FLOAT, 0, pointOne);
//		glDrawArrays(GL_POINTS, 0, 1);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 15:line(!!!!!!!must change the drawing vertices according to your width and height)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define S_W 1000 //screen width
//#define S_H 800	//screen height 
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float line[] =
//	{
//		//only +ve so instead of 0.1 we take 100
//		S_W/4, S_H/4,
//		S_W / 6, S_H / 6
//	
//	};
//	float lineTwo[] =
//	{
//		//only +ve so instead of 0.1 we take 100
//		S_W / 2, S_H / 2,
//		S_W / 3, S_H / 3
//
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 0.5, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw square
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, line);
//		glDrawArrays(GL_LINES , 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, lineTwo);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 16: home 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangle[] =
//	{
//		//clockwise //top right triangle
//		0.4,0.7,0,
//		0.8,0.7,0,
//
//		0.8,0.7,0,
//		0.6,0.9,0,
//
//		0.6,0.9,0,
//		0.4,0.7,0
//
//	};
//
//
//	float square[] =
//	{
//		//clockwise //top right triangle
//		0.4,0.7,0,
//		0.4,0.4,0,
//
//		0.4,0.4,0,
//		0.8,0.4,0,
//
//		0.8,0.4,0,
//		0.8,0.7,0
//
//	};
//
//	
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		glLineWidth(20);
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangle);
//		glDrawArrays(GL_LINES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw square
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, square);
//		glDrawArrays(GL_LINES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



////n0 17: hollow home with colors

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangle[] =
//	{
//		//clockwise //top right triangle
//		0.4,0.7,0,
//		0.8,0.7,0,
//
//		0.8,0.7,0,
//		0.6,0.9,0,
//
//		0.6,0.9,0,
//		0.4,0.7,0
//
//	};
//
//	float color[] =
//	{
//		//rgb
//		1,0,0,
//		0,1,0,
//		0,0,1
//
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		glLineWidth(20);
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, color);
//		glVertexPointer(3, GL_FLOAT, 0, triangle);
//		glDrawArrays(GL_LINES, 0, 6);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//no 18: filled home with colors

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangle[] =
//	{
//		//clockwise //top right triangle
//		0.4,0.7,0,
//		//0.8,0.7,0,
//
//		0.8,0.7,0,
//		//0.6,0.9,0,
//
//		0.6,0.9,0,
//		//0.4,0.7,0
//
//	};
//
//	float quad[] =
//	{
//		0.4,0.7,0,
//		0.8,0.7,0,
//
//		0.8,0.7,0,
//		0.8,0.3,0,
//
//		0.8,0.3,0,
//		0.4,0.3,0,
//
//		0.4,0.3,0,
//		0.4,0.7,0
//
//	};
//
//	float colorTri[] =
//	{
//		//rgb
//		1,0,0,
//		1,0,0,
//		1,0,0
//
//	};
//
//	float colorQuad[] =
//	{
//		//rgb
//		1,0,0,
//		0,1,0,
//		0,0,1
//
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		glLineWidth(20);
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorTri);
//		glVertexPointer(3, GL_FLOAT, 0, triangle);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw lines
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorQuad);
//		glVertexPointer(3, GL_FLOAT, 0, quad);
//		glDrawArrays(GL_LINES, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}


////19 Scene with keyvoard input

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods);
//
//void main()
//{
//	GLint wid = 1000; //*window variable
//	GLint height = 1000; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall);
//	
////base
//	float quad[] =
//	{
//		-1,-1,0,
//		1,-1,0,
//		1,-0.7,0,
//		-1,-0.7,0
//
//	};
//
//	float colorQuad[] =
//	{
//		//rgb
//		0,1,0,
//		0,1,0,
//		0,1,0
//
//	};
//
//
////house
//	float rect[] =
//	{
//		-0.6,-0.4,0,
//		-0.6,-0.7,0,
//		-0.1,-0.7,0,
//		-0.1,-0.4,0
//
//	};
//	float rectcol[] =
//	{
//		//rgb
//		0,1,1,
//		0,1,1,
//		0,1,1
//
//	};
//
//	float houseTri[] =
//	{
//		-0.6,-0.4,0,
//		-0.1,-0.4,0,
//		-0.35,-0.1,0
//
//	};
//	float housetricol[] =
//	{
//		//rgb
//		0,1,1,
//		0,1,1,
//		0,1,1
//
//	};
//	
//
////blue path
//	float path[] =
//	{
//		-0.6,-0.7,0,
//		-1,-1,0,
//	     0.2,-1,0,
//	    -0.1,-0.7,0
//
//	};
//
//
////tree
//	float trunk[] =
//	{
//		0.0,-0.2,0,
//		0.0,-0.7,0,
//		0.1,-0.7,0,
//		0.1,-0.2,0
//
//	};
//	float trunkcol[] =
//	{
//		//rgb
//		0,1,1,
//		0,1,1,
//		0,1,1
//
//	};
////gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//glLineWidth(20);
//		//for the bg color
//		glClearColor(1, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
////base
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorQuad);
//		glVertexPointer(3, GL_FLOAT, 0, quad);
//		glDrawArrays(GL_QUADS, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
////house
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, rectcol);
//		glVertexPointer(3, GL_FLOAT, 0, rect);
//		glDrawArrays(GL_QUADS, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, housetricol);
//		glVertexPointer(3, GL_FLOAT, 0, houseTri);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
////blue path
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, rectcol);
//		glVertexPointer(3, GL_FLOAT, 0, path);
//		glDrawArrays(GL_QUADS, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
////tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, trunkcol);
//		glVertexPointer(3, GL_FLOAT, 0, trunk);
//		glDrawArrays(GL_QUADS, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	cout << "key pressed as ASCII is ==" << key << endl;
//	cout << "key pressed as scancode is ==" << scancode << endl;
//	cout << "key pressed as action is ==" << action << endl;
//	cout << "key pressed as mods is ==" << mods << endl;
//	if (key == 'A')
//	{
//		cout << "Hey A has been pressed" << endl;
//	}
//	if (key == 66)
//	{
//		cout << "Hey B has been pressed" << endl;
//
//	}
//	if (key == GLFW_KEY_SPACE || action == GLFW_REPEAT)
//	{
//		cout << "Hey you're pressing SPACE only. Kepp pressing SPACE continuous" << endl;
//	}
//	if (key == GLFW_KEY_LEFT)
//	{
//		cout << "You have entered the left arrow." << endl;
//	}
//}



////20 scene with mouse input activity

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//static void cursorPosition(GLFWwindow* window, double xposi, double yposi);
//void cursorEnter(GLFWwindow* window, int enter);
//void mouseBtn(GLFWwindow* window, int btn, int act, int mods);
//void scrollBtn(GLFWwindow* window, double xoffset, double yoffset);
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//mouse functions calling 
//	glfwSetCursorPosCallback(window, cursorPosition);
//	glfwSetCursorEnterCallback(window, cursorEnter);
//	glfwSetMouseButtonCallback(window,mouseBtn);
//	glfwSetScrollCallback(window, scrollBtn);
//
//	//base
//	float quad[] =
//	{
//		-1,-1,0,
//		1,-1,0,
//		1,-0.7,0,
//		-1,-0.7,0
//
//	};
//
//	float colorQuad[] =
//	{
//		//rgb
//		0,1,0,
//		0,1,0,
//		0,1,0
//
//	};
//
//
//	//house
//	float rect[] =
//	{
//		-0.6,-0.4,0,
//		-0.6,-0.7,0,
//		-0.1,-0.7,0,
//		-0.1,-0.4,0
//
//	};
//
//	float rectcol[] =
//	{
//		//rgb
//		0,1,1,
//		0,1,1,
//		0,1,1
//
//	};
//
//
//	float houseTri[] =
//	{
//		-0.6,-0.4,0,
//		-0.1,-0.4,0,
//		-0.35,-0.1,0
//
//	};
//
//	float housetricol[] =
//	{
//		//rgb
//		0,1,1,
//		0,1,1,
//		0,1,1
//
//	};
//
//	//lighthouse
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		glLineWidth(20);
//		//for the bg color
//		glClearColor(1, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw lines
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorQuad);
//		glVertexPointer(3, GL_FLOAT, 0, quad);
//		glDrawArrays(GL_QUADS, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//rect
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, rectcol);
//		glVertexPointer(3, GL_FLOAT, 0, rect);
//		glDrawArrays(GL_QUADS, 0, 8);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, housetricol);
//		glVertexPointer(3, GL_FLOAT, 0, houseTri);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//static void cursorPosition(GLFWwindow* window, double xposi, double yposi)
//{
//	cout << "xposi=="<< xposi << "!!" << "yposi==" << yposi << endl;
//
//}
//void cursorEnter(GLFWwindow* window, int enter)
//{
//	if (enter)
//	{
//		cout << "hey you entered inside window" << endl;
//	}
//	else
//	{
//		cout << "you left the window" << endl;
//	}
//}
//void mouseBtn(GLFWwindow* window, int btn, int act, int mods)
//{
//	if (btn == GLFW_MOUSE_BUTTON_RIGHT && act == GLFW_PRESS)
//	{
//		cout << "Right button has been pressed" << endl;
//	}
//	if (btn == GLFW_MOUSE_BUTTON_LEFT && act == GLFW_PRESS)
//	{
//		cout << "LEft button has been pressed" << endl;
//	}
//}
//void scrollBtn(GLFWwindow* window, double xoffset, double yoffset)
//{
//	cout << "xoffset==" << xoffset << "!!" << "yoffset==" <<yoffset << endl;
//}





////lighthouse

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangleOne[] =
//	{
//		//base
//		-0.9,-0.9,0,
//		-0.9,-0.7,0,
//
//		-0.9,-0.7,0,
//		0.9,-0.7,0,
//
//		0.9,-0.7,0,
//		0.9,-0.9,0,
//
//		0.9,-0.9,0,
//		-0.9,-0.9,0,
//
//	};
//
//	float home[] =
//	{
//		//home
//		-0.6,-0.4,0,
//		-0.1,-0.4,0,
//
//		-0.1,-0.4,0,
//		-0.1,-0.7,0,
//
//		-0.6,-0.4,0,
//		-0.6,-0.7,0,
//
//		-0.6,-0.4,0,
//		-0.35,-0.1,0,
//
//		-0.35,-0.1,0,
//		-0.1,-0.4,0,
//	};
//
//	float lightHouse[] =
//	{
//		//lighthouse
//		0.1,-0.7,0,
//		0.4,0.5,0,
//
//		0.4,0.5,0,
//		0.6,0.5,0,
//
//		0.6,0.5,0,
//		0.8,-0.7,0,
//
//		0.3,0.5,0,
//		0.7,0.5,0,
//
//		0.7,0.5,0,
//		0.7,0.6,0,
//
//		0.7,0.6,0,
//		0.3,0.6,0,
//
//		0.3,0.6,0,
//		0.3,0.5,0,
//
//		//triangle
//		0.4,0.6,0,
//		0.5,0.8,0,
//
//		0.5,0.8,0,
//		0.6,0.6,0
//	};
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		
//		//draw triangle
//		glColor3f(1, 0, 0);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleOne);
//		glDrawArrays(GL_LINES, 0, 8);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//home
//		glColor3f(0, 0, 1);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, home);
//		glDrawArrays(GL_LINES, 0, 10);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//ligthouse
//		glColor3f(0, 1, 0);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, lightHouse);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}




////lighthouse by triangle or polygon

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangleOne[] =
//	{
//		//base
//		-0.9,-0.9,0,
//		-0.9,-0.7,0,
//
//		-0.9,-0.7,0,
//		0.9,-0.7,0,
//
//		0.9,-0.7,0,
//		0.9,-0.9,0,
//
//		0.9,-0.9,0,
//		-0.9,-0.9,0,
//
//	};
//
//	float home[] =
//	{
//		//home
//		-0.6,-0.4,0, //a
//		-0.1,-0.4,0, //o
//		-0.35,-0.1,0, //e
//
//		//-0.1,-0.4,0, // o
//		
//
//		-0.6,-0.4,0, //a
//		-0.6,-0.7,0, //b
//		-0.1,-0.7,0, //c
//
//		-0.6,-0.4,0, //a
//		-0.1,-0.7,0, //c
//		-0.1,-0.4,0, //o
//	};
//
//	float homeCol[] =
//	{
//		1,0,0,
//		1,0,1,
//		1,1,0,
//		0,0,1,
//		0,1,0,
//		1,0,1,
//		1,1,0,
//		0,1,1,
//		0,1,0
//	};
//
//	float lightHouse[] =
//	{
//		//lighthouse
//		0.1,-0.7,0,
//		0.4,0.5,0,
//
//		0.4,0.5,0,
//		0.6,0.5,0,
//
//		0.6,0.5,0,
//		0.8,-0.7,0,
//
//		0.3,0.5,0,
//		0.7,0.5,0,
//
//		0.7,0.5,0,
//		0.7,0.6,0,
//
//		0.7,0.6,0,
//		0.3,0.6,0,
//
//		0.3,0.6,0,
//		0.3,0.5,0,
//
//		//triangle
//		0.4,0.6,0,
//		0.5,0.8,0,
//
//		0.5,0.8,0,
//		0.6,0.6,0
//	};
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//draw triangle
//		glColor3f(1, 0, 0);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, triangleOne);
//		glDrawArrays(GL_LINES, 0, 8);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//home
//		//glColor3f(0, 0, 1);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		//color
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, home);
//		glColorPointer(3, GL_FLOAT, 0, homeCol);
//		glDrawArrays(GL_TRIANGLES, 0, 9); 
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//ligthouse
//		glColor3f(0, 1, 0);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, lightHouse);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}




//lighthouse by triangle or polygon

#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>

using namespace std;

void main()
{
	GLint wid = 800; //*window variable
	GLint height = 800; //*window variable
	GLFWwindow* window; //pointer var as window that will hold address only 
	glfwInit();
	if (!glfwInit())
	{
		cout << "glfwINit function error!!" << endl;
	}
	else
	{
		cout << "glfwINit function is available!!" << endl;
	}
	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
	if (!window)
	{
		cout << "Window not available!!" << endl;
	}
	else
	{
		cout << "Window is opening successfully!!" << endl;
	}

	// make the window context current
	glfwMakeContextCurrent(window);

	float triangleOne[] =
	{
		//base
		-0.9,-0.9,0,
		-0.9,-0.7,0,

		-0.9,-0.7,0,
		0.9,-0.7,0,

		0.9,-0.7,0,
		0.9,-0.9,0,

		0.9,-0.9,0,
		-0.9,-0.9,0,

	};

	float home[] =
	{
		//home
		-0.6,-0.4,0,
		-0.1,-0.4,0,

		-0.1,-0.4,0,
		-0.1,-0.7,0,

		-0.6,-0.4,0,
		-0.6,-0.7,0,

		-0.6,-0.4,0,
		-0.35,-0.1,0,

		-0.35,-0.1,0,
		-0.1,-0.4,0
	};

	float homeCol[] =
	{
		1,0,0,
		1,0,1,
		1,1,0,
		1,1,0,
		0,0,1,
		0,1,0,
		1,0,1,
		1,1,0,
		0,1,1,
		0,1,0
	};

	float lightHouse[] =
	{
		//lighthouse
		0.1,-0.7,0,
		0.4,0.5,0,

		0.4,0.5,0,
		0.6,0.5,0,

		0.6,0.5,0,
		0.8,-0.7,0,

		0.3,0.5,0,
		0.7,0.5,0,

		0.7,0.5,0,
		0.7,0.6,0,

		0.7,0.6,0,
		0.3,0.6,0,

		0.3,0.6,0,
		0.3,0.5,0,

		//triangle
		0.4,0.6,0,
		0.5,0.8,0,

		0.5,0.8,0,
		0.6,0.6,0
	};



	//gameloop
	while (!glfwWindowShouldClose(window))
	{
		//for the bg color
		glClearColor(0.5, 1, 1, 0); //for rgb color change
		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer


		//draw triangle
		glColor3f(1, 0, 0);
		glLineWidth(20);
		glEnableClientState(GL_VERTEX_ARRAY);
		glVertexPointer(3, GL_FLOAT, 0, triangleOne);
		glDrawArrays(GL_LINES, 0, 8);
		glDisableClientState(GL_VERTEX_ARRAY);

		//home
		//glColor3f(0, 0, 1);
		glLineWidth(20);
		glEnableClientState(GL_VERTEX_ARRAY);
		//color
		glEnableClientState(GL_COLOR_ARRAY);
		glVertexPointer(3, GL_FLOAT, 0, home);
		glColorPointer(3, GL_FLOAT, 0, homeCol);
		glDrawArrays(GL_LINES, 0, 10);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//ligthouse
		glColor3f(0, 1, 0);
		glLineWidth(20);
		glEnableClientState(GL_VERTEX_ARRAY);
		glVertexPointer(3, GL_FLOAT, 0, lightHouse);
		glDrawArrays(GL_LINES, 0, 18);
		glDisableClientState(GL_VERTEX_ARRAY);


		glfwSwapBuffers(window);//to swap the new color for window
		glfwPollEvents();
	}
	glfwTerminate();
}