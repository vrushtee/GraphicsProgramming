//1: Set the graphical window without if else condition.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//
//void projectOne()
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
//
//void main()
//{
//	projectOne();
//}



//// 2: Set the graphical window.

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void projectTwo()
//{
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
//
//void main()
//{
//	projectTwo();
//}



//3 : Background window also assigned variable for window's width & height 

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//4: Drawing in out graphical window

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//5: Drawing in out graphical window with own coordinates

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
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//6: Drawing square

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//7: Making hexagon

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
//
//	glfwInit();
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//8: Making hex and triangles in corner

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//9: quad or square

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



//10: quad or square in different position ???????

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//11: screen resolution for triangle(!!!!!!!must change the drawing vertices according to your width and height)

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



//12: screen resolution for quad(!!!!!!!must change the drawing vertices according to your width and height)

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
//
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
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



//  13: screen resolution for point(!!!!!!!must change the drawing vertices according to your width and height)

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
//
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
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



//14: multiple points(!!!!!!!must change the drawing vertices according to your width and height)

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
//
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
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



//  15:line(!!!!!!!must change the drawing vertices according to your width and height)

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
//
//	window = glfwCreateWindow(S_W, S_H, "Window with background color", NULL, NULL); //*assigned window variable 
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



//  16: home 

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//17: hollow home with colors

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//  18: filled home with colors

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//21 lighthouse

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float triangleOne[] =
//	{
//		//base
//		-1,-1,0,
//		-1,-0.7,0,
//
//		-1,-0.7,0,
//		1,-0.7,0,
//
//		1,-0.7,0,
//		1,-1,0,
//
//		1,-1,0,
//		-1,-1,0,
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
//		glClearColor(0, 0, 0, 0); //for rgb color change
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
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//22 lighthouse by triangle or polygon

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
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



//23 lighthouse by triangle or polygon

////#include<GL/glew.h>
////#include<GLFW/glfw3.h>
////#include<iostream>
////
////using namespace std;
////
////void ligHouse()
////{
////	GLint wid = 800; //*window variable
////	GLint height = 800; //*window variable
////	GLFWwindow* window; //pointer var as window that will hold address only 
////	glfwInit();
////
////	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
////
////	// make the window context current
////	glfwMakeContextCurrent(window);
////
////	float triangleOne[] =
////	{
////		//base
////		-0.9,-0.9,0,
////		-0.9,-0.7,0,
////
////		-0.9,-0.7,0,
////		0.9,-0.7,0,
////
////		0.9,-0.7,0,
////		0.9,-0.9,0,
////
////		0.9,-0.9,0,
////		-0.9,-0.9,0,
////
////	};
////
////	float home[] =
////	{
////		//home
////		-0.6,-0.4,0,
////		-0.1,-0.4,0,
////
////		-0.1,-0.4,0,
////		-0.1,-0.7,0,
////
////		-0.6,-0.4,0,
////		-0.6,-0.7,0,
////
////		-0.6,-0.4,0,
////		-0.35,-0.1,0,
////
////		-0.35,-0.1,0,
////		-0.1,-0.4,0
////	};
////
////	float homeCol[] =
////	{
////		1,0,0,
////		1,0,1,
////		1,1,0,
////		1,1,0,
////		0,0,1,
////		0,1,0,
////		1,0,1,
////		1,1,0,
////		0,1,1,
////		0,1,0
////	};
////
////	float lightHouse[] =
////	{
////		//lighthouse
////		0.1,-0.7,0,
////		0.4,0.5,0,
////
////		0.4,0.5,0,
////		0.6,0.5,0,
////
////		0.6,0.5,0,
////		0.8,-0.7,0,
////
////		0.3,0.5,0,
////		0.7,0.5,0,
////
////		0.7,0.5,0,
////		0.7,0.6,0,
////
////		0.7,0.6,0,
////		0.3,0.6,0,
////
////		0.3,0.6,0,
////		0.3,0.5,0,
////
////		//triangle
////		0.4,0.6,0,
////		0.5,0.8,0,
////
////		0.5,0.8,0,
////		0.6,0.6,0
////	};
////
////
////
////	//gameloop
////	while (!glfwWindowShouldClose(window))
////	{
////		//for the bg color
////		glClearColor(0, 0, 0, 0); //for rgb color change
////		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
////
////
////		//draw triangle
////		glColor3f(1, 0, 0);
////		glLineWidth(20);
////		glEnableClientState(GL_VERTEX_ARRAY);
////		glVertexPointer(3, GL_FLOAT, 0, triangleOne);
////		glDrawArrays(GL_LINES, 0, 8);
////		glDisableClientState(GL_VERTEX_ARRAY);
////
////		//home
////		//glColor3f(0, 0, 1);
////		glLineWidth(20);
////		glEnableClientState(GL_VERTEX_ARRAY);
////		//color
////		glEnableClientState(GL_COLOR_ARRAY);
////		glVertexPointer(3, GL_FLOAT, 0, home);
////		glColorPointer(3, GL_FLOAT, 0, homeCol);
////		glDrawArrays(GL_LINES, 0, 10);
////		glDisableClientState(GL_COLOR_ARRAY);
////		glDisableClientState(GL_VERTEX_ARRAY);
////
////		//ligthouse
////		glColor3f(0, 1, 0);
////		glLineWidth(20);
////		glEnableClientState(GL_VERTEX_ARRAY);
////		glVertexPointer(3, GL_FLOAT, 0, lightHouse);
////		glDrawArrays(GL_LINES, 0, 18);
////		glDisableClientState(GL_VERTEX_ARRAY);
////
////
////		glfwSwapBuffers(window);//to swap the new color for window
////		glfwPollEvents();
////	}
////	glfwTerminate();
////
////}
////void main()
////{
////	ligHouse();
////}



//24 3d door

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		-1, -1, -1,  //A 
//		-1, -1,  1,  //B 
//		-1,  1,  1,  //C
//		-1,  1, -1,  //D //left
//
//	     1, -1, -1,  //E
//		 1, 1, -1,   //F
//		 1, 1, 1,   //G
//		 1, -1, 1,  //H //right
//
//	-1, -1, -1,   -1, -1, 0.4,   1, -1, 0.4,   1, -1, -1,//bottom
//	-1, 1, -1,   -1, 0.4, 1,   1, 0.4, 1,   1, 1, -1,//top
//	-0.5, -1, -1,   -0.5, 0.5, -1,   0.5,  0.5, -1,  0.5, -1, -1,//back
//	-0.25, -0.25, 1,  -0.25, 0.25, 1,  0.25, 0.25, 1,  0.25, -0.25, 1//front
//
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
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
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glLoadIdentity();
//		gluPerspective(100, wid/height, 1.2, 10);
//		glTranslatef(-0.3, -0.3, -1);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//25 3d cube

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		
//		-0.4, -0.4, -0.4,  //A 
//		-0.4, -0.4,  0.4,  //B 
//		-0.4,  0.4,  0.4,  //C
//		-0.4,  0.4, -0.4,  //D //left
//
//		 0.4, -0.4, -0.4,  //E
//		 0.4, 0.4, -0.4,   //F
//		 0.4, 0.4, 0.4,   //G
//		 0.4, -0.4, 0.4,  //H //right
//
//		  -0.4,-0.4,-0.4, //M
//		-0.4,-0.4,0.2, //N
//		0.4,-0.4,0.2, //O
//		0.4,-0.4,-0.4 //P //bottom
//
//		 -0.4, 0.4, -0.4,  //I
//		 -0.4, 0.2, 0.4,  //J
//		 0.4, 0.2, 0.4,   //K
//		 0.4, 0.4, -0.4    //L //top
//
//		-0.25, -0.4, -0.4,   -0.25, 0.25, -0.4,   0.25,  0.25, -0.4,  0.25, -0.4, -0.4,//back
//
//		
//
//
//
//		//	    -1, -1, -1,   -1, -1, 0.4,   1, -1, 0.4,   1, -1, -1,//bottom
//
//		////left
//		//-0.4,0.4,-0.4, //A
//		//-0.4,0.4,0.4, //D
//		//-0.4,-0.4,0.4 //H
//		//- 0.4,-0.4,-0.4, //E
//
//		////back
//		//-0.4,0.4,-0.4, //A
//		//0.4,0.4,-0.4, //B
//		//0.4,-0.4,-0.4, //F
//		//-0.4,-0.4,-0.4, //E
//
//		////right
//		//0.4,0.4,-0.4, //B
//		//0.4,0.4,0.4, //C
//		//0.4,-0.4,0.4, //G
//		//0.4,-0.4,-0.4 //F
//
//
//	};
//
//	
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//		0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//		0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0
//		/*0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1*/
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
//		glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 20);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glLoadIdentity();
//		gluPerspective(100, wid/height, 1.2, 10);
//		glTranslatef(0, 0, -1);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//26 rotation of 3d object

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
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		-1, -1, -1,  //A 
//		-1, -1,  1,  //B 
//		-1,  1,  1,  //C
//		-1,  1, -1,  //D //left
//
//		 1, -1, -1,  //E
//		 1, 1, -1,   //F
//		 1, 1, 1,   //G
//		 1, -1, 1,  //H //right
//
//	-1, -1, -1,   -1, -1, 0.4,   1, -1, 0.4,   1, -1, -1,//bottom
//	-1, 1, -1,   -1, 0.4, 1,   1, 0.4, 1,   1, 1, -1,//top
//	-0.5, -1, -1,   -0.5, 0.5, -1,   0.5,  0.5, -1,  0.5, -1, -1,//back
//	-0.25, -0.25, 1,  -0.25, 0.25, 1,  0.25, 0.25, 1,  0.25, -0.25, 1//front
//
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(-0.3, -0.3, -5);
//
//		static float angle = 0;
//		glRotatef(angle, 0, 1, -1);
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		angle += 0.5;
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//27 keyboard rotation

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods);
//
//GLfloat rotationx = 0;
//GLfloat rotationy = 0;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall);
//
//	float vertices[] =
//	{
//		-1, -1, -1,  //A 
//		-1, -1,  1,  //B 
//		-1,  1,  1,  //C
//		-1,  1, -1,  //D //left
//
//		 1, -1, -1,  //E
//		 1, 1, -1,   //F
//		 1, 1, 1,   //G
//		 1, -1, 1,  //H //right
//
//	-1, -1, -1,   -1, -1, 0.4,   1, -1, 0.4,   1, -1, -1,//bottom
//	-1, 1, -1,   -1, 0.4, 1,   1, 0.4, 1,   1, 1, -1,//top
//	-0.5, -1, -1,   -0.5, 0.5, -1,   0.5,  0.5, -1,  0.5, -1, -1,//back
//	-0.25, -0.25, 1,  -0.25, 0.25, 1,  0.25, 0.25, 1,  0.25, -0.25, 1//front
//
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(-0.3, -0.3, -5);
//
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		default:
//			break;
//		}
//	}
//}



//28 cube with keyboard rotation

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods);
//
//GLfloat rotationx = 0;
//GLfloat rotationy = 0;
//
//void main()
//{
//	GLint wid = 1600; //*window variable
//	GLint height = 1600; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall);
//	glEnable(GL_DEPTH_TEST); // Depth Testing
//
//
//	float vertices[] =
//	{
//		-1.5, -1.5, -1.5,  //A 
//		-1.5, -1.5,  1.5,  //B 
//		-1.5,  1.5,  1.5,  //C
//		-1.5,  1.5, -1.5,  //D //left
//
//		 1.5, -1.5, -1.5,  //E
//		 1.5, 1.5, -1.5,   //F
//		 1.5, 1.5, 1.5,   //G
//		 1.5, -1.5, 1.5,  //H //right
//
//		-1.5, -1.5, -1.5,  //A 
//		-1.5, -1.5, 1.5,  //B 
//		1.5, -1.5, 1.5 ,  //H 
//		1.5, -1.5, -1.5, //E //bottom
//		
//		-1.5,  1.5,  1.5,  //C
//		-1.5,  1.5, -1.5,  //D 
//		1.5, 1.5, -1.5,   //F
//		 1.5, 1.5, 1.5,   //G //top
//
//		 -1.5, -1.5, -1.5,  //A 
//		-1.5,  1.5, -1.5,  //D
//		1.5, 1.5, -1.5,   //F
//		 1.5, -1.5, -1.5,  //E //back
//
//		 -1.5, -1.5,  1.5,  //B 
//		-1.5,  1.5,  1.5,  //C
//		1.5, 1.5, 1.5,   //G
//		 1.5, -1.5, 1.5  //H  //front
//	};
//
//	GLfloat colors[] =
//	{
//	1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(-0.3, -0.3, -5);
//
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		default:
//			break;
//		}
//	}
//}



//29 prism with keyboard rotation

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods);
//GLfloat rotationx, rotationy;
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
//	glfwMakeContextCurrent(window);
//
//	glfwSetKeyCallback(window, keyCall);
//	glEnable(GL_DEPTH_TEST); // Depth Testing  
//
//
//	float vertices[] =
//	{
//
//		//rectangle
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //bottom
//		1,-1,1,     //c
//
//		1,-1,1,     //c
//		1,-1,-1,   //d
//		-1,-1,-1,  //a
//
//		//triangles
//		-1,-1,1,    //b   
//		1,-1,1,     //c    //front
//		0.5,1,-0.5,  //e
//
//		1,-1,1,     //c
//		1,-1,-1,   //d     //right
//		0.5,1,-0.5, //e
//
//		1,-1,-1,   //d
//		-1,-1,-1,  //a     //back
//		0.5,1,-0.5, //e
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b     //left
//		0.5,1,-0.5, //e
//	};
//
//	GLfloat colors[] =
//	{
//
//	1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0,0,0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -4);
//
//
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationspeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationspeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationspeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationspeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationspeed;
//			break;
//		default:
//			break;
//		}
//	}
//}


//30 cube with keyboard rotation

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define SCREEN_WIDTH 640//#define SCREEN_HEIGHT 480
//
//
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods);
//
//GLfloat rotationx = 0;
//GLfloat rotationy = 0;
//
//void main()
//{
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall);
//	glEnable(GL_DEPTH_TEST); // Depth Testing
//
//	GLfloat centerPosX;
//	GLfloat centerPosY;
//	GLfloat centerPosZ;
//	GLfloat edgeLength;
//
//	GLfloat halfSideLength = edgeLength * 0.5f;
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	float vertices[] =
//	{
//		//-1.5, -1.5, -1.5,  //A 
//		//-1.5, -1.5,  1.5,  //B 
//		//-1.5,  1.5,  1.5,  //C
//		//-1.5,  1.5, -1.5,  //D //left
//
//		// 1.5, -1.5, -1.5,  //E
//		// 1.5, 1.5, -1.5,   //F
//		// 1.5, 1.5, 1.5,   //G
//		// 1.5, -1.5, 1.5,  //H //right
//
//		//-1.5, -1.5, -1.5,  //A 
//		//-1.5, -1.5, 1.5,  //B 
//		//1.5, -1.5, 1.5 ,  //H 
//		//1.5, -1.5, -1.5, //E //bottom
//		//
//		//-1.5,  1.5,  1.5,  //C
//		//-1.5,  1.5, -1.5,  //D 
//		//1.5, 1.5, -1.5,   //F
//		// 1.5, 1.5, 1.5,   //G //top
//
//		// -1.5, -1.5, -1.5,  //A 
//		//-1.5,  1.5, -1.5,  //D
//		//1.5, 1.5, -1.5,   //F
//		// 1.5, -1.5, -1.5,  //E //back
//
//		// -1.5, -1.5,  1.5,  //B 
//		//-1.5,  1.5,  1.5,  //C
//		//1.5, 1.5, 1.5,   //G
//		// 1.5, -1.5, 1.5  //H  //front
//
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//
//	};
//
//	GLfloat colors[] =
//	{
//	1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//
//		glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);//for view your screen(1. x, 2. y,3. w, 4. h)
//		glMatrixMode(GL_PROJECTION);// for change matrix mode
//		glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//		glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, SCREEN_WIDTH / SCREEN_HEIGHT, 1.2, 10);
//		glTranslatef(-0.3, -0.3, -10);
//
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		default:
//			break;
//		}
//	}
//}



//31 sirs code for 4 moving and rotating triangle

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#define S_W 1000 //screen width
//#define S_H 800	//screen height 
//
//using namespace std;
//GLfloat rotationx = 0;
//GLfloat rotationy = 0;
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods);
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
//	glfwSetKeyCallback(window, keyCall);
//	glEnable(GL_DEPTH_TEST); // Depth Testing
//
//	GLfloat halfScreenWidth = S_W / 3;//	GLfloat halfScreenHeight = S_H / 3;
//
//	GLfloat centerPosX = halfScreenWidth;
//	GLfloat centerPosY= halfScreenHeight;
//	GLfloat centerPosZ = -500;
//	GLfloat edgeLength = 100;
//
//	GLfloat halfSideLength = edgeLength * 0.5f;
//	
//
//	float triangle[] =
//	{
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//		
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//		
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//		
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//		
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//
//	};
//
//	GLfloat colors[] =
//	{
//	1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
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
//				//for the bg color
//				glClearColor(0, 0, 0, 0); //for rgb color change
//				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//		
//				glPushMatrix();//				glTranslatef(halfScreenWidth, halfScreenHeight, -500);//				glRotatef(rotationx, 1, 0, 0);//				glRotatef(rotationy, 0, 1, 0);//				//glRotatef(rotationY, 0, 0, 1);//				glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//
//		
//				glRotatef(rotationx, 1, 0, -1);
//				glRotatef(rotationy, 0, 1, -1);
//				//draw triangle
//				//glColor3f(1, 0, 0);
//				glEnableClientState(GL_VERTEX_ARRAY);
//				glEnableClientState(GL_COLOR_ARRAY);
//				glVertexPointer(3, GL_FLOAT, 0, triangle);
//				glColorPointer(3, GL_FLOAT, 0, colors);
//				glDrawArrays(GL_QUADS, 0, 24);
//				glDisableClientState(GL_COLOR_ARRAY);
//				glDisableClientState(GL_VERTEX_ARRAY);
//
//		glPopMatrix();
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 640
//#define SCREEN_HEIGHT 480
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		//glPopMatrix();
//
//		//2nd cube
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight + 200, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight + 200 , -500, 50);
//		glPopMatrix();
//
//		//3rd cube
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth +200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 50);
//		//glPopMatrix();
//
//		//4th cube
//		glPushMatrix();
//		glTranslatef(halfScreenWidth +200, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth +200), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight, -500, 100);
//		glPopMatrix();
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	0, 0, 0,
//	0, 0, 1,
//	0, 1, 1,
//	0, 1, 0,
//	1, 0, 0,
//	1, 0, 1,
//	1, 1, 1,
//	1, 1, 0,
//	0, 0, 0,
//	0, 0, 1,
//	1, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 1, 1,
//	1, 1, 1,
//	1, 1, 0,
//	0, 0, 0,
//	0, 1, 0,
//	1, 1, 0,
//	1, 0, 0,
//	0, 0, 1,
//	0, 1, 1,
//	1, 1, 1,
//	1, 0, 1
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_QUADS, 0, 24);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}//draw cube closed



//32 Scaling of object

//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 640
//#define SCREEN_HEIGHT 480
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//void Scaling();
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
////GLfloat rotationZ = 0.0f;
//
////scaling variables
//GLfloat scalefactor = 1.0f;
//GLboolean scaleUp = false;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		//2nd cube
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight + 200, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight + 200 , -500, 50);
//		glPopMatrix();
//
//		//3rd cube
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth +200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 50);
//		glPopMatrix();
//
//		//4th cube
//		glPushMatrix();
//		glTranslatef(halfScreenWidth +200, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//
//		//scaling
//		
//		glScalef(scalefactor, scalefactor,scalefactor);
//		Scaling();
//
//
//
//		glTranslatef(-(halfScreenWidth +200), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight, -500, 100);
//		glPopMatrix();
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	0, 0, 0,
//	0, 0, 1,
//	0, 1, 1,
//	0, 1, 0,
//	1, 0, 0,
//	1, 0, 1,
//	1, 1, 1,
//	1, 1, 0,
//	0, 0, 0,
//	0, 0, 1,
//	1, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 1, 1,
//	1, 1, 1,
//	1, 1, 0,
//	0, 0, 0,
//	0, 1, 0,
//	1, 1, 0,
//	1, 0, 0,
//	0, 0, 1,
//	0, 1, 1,
//	1, 1, 1,
//	1, 0, 1
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_QUADS, 0, 24);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}//draw cube closed
//
//void Scaling()
//{
//	//scale factor conditions, boundaries for zoom in zoom out of the object
//	if (scalefactor >= 2.0)
//	{
//		scaleUp = false;
//	}
//	if (scalefactor < 0.5)
//	{
//		scaleUp = true;
//	}
//
//	if (scaleUp)
//	{
//		scalefactor += 0.01;
//	}
//	else
//	{
//		scalefactor -= 0.01;
//	}
//}



//33 rotate obj via keyboard 

#include <GL/glew.h>
#include <GLFW/glfw3.h>
//#include <iostream>
//#include <cstdlib>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
void Scaling();

float red = 255, green = 255, blue = 255;

GLfloat rotationx = 0.0f;
GLfloat rotationy = 0.0f;
//GLfloat rotationZ = 0.0f;

//scaling variables
GLfloat scalefactor = 1.0f;
GLboolean scaleUp = false;

GLfloat rotationx1 = 0.0f;
GLfloat rotationy1 = 0.0f;

GLfloat rotationx2 = 0.0f;
GLfloat rotationy2 = 0.0f;

GLfloat rotationx3 = 0.0f;
GLfloat rotationy3 = 0.0f;

int main(void)
{
	GLFWwindow* window;

	// Initialize the library
	if (!glfwInit())
	{
		return -1;
	}

	// Create a windowed mode window and its OpenGL context
	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);

	glfwSetKeyCallback(window, keyCallback);
	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);


	int screenWidth, screenHeight;
	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	// Make the window's context current
	glfwMakeContextCurrent(window);
	glEnable(GL_DEPTH_TEST);
	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
	glLoadIdentity(); // same as above comment

	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;


	// Loop until the user closes the window
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Render OpenGL here

		glPushMatrix();
		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
		glRotatef(rotationx, 1, 0, 0);
		glRotatef(rotationy, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);
		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
		glPopMatrix();

		//2nd cube
		glPushMatrix();
		glTranslatef(halfScreenWidth, halfScreenHeight + 200, -500);
		glRotatef(rotationx1, 1, 0, 0);
		glRotatef(rotationy1, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);
		glTranslatef(-halfScreenWidth, -(halfScreenHeight + 200), 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth, halfScreenHeight + 200 , -500, 50);
		glPopMatrix();

		//3rd cube
		glPushMatrix();
		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
		glRotatef(rotationx2, 1, 0, 0);
		glRotatef(rotationy2, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);
		glTranslatef(-(halfScreenWidth +200), -(halfScreenHeight + 200), 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 50);
		glPopMatrix();

		//4th cube
		glPushMatrix();
		glTranslatef(halfScreenWidth +200, halfScreenHeight, -500);
		glRotatef(rotationx3, 1, 0, 0);
		glRotatef(rotationy3, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);

		//scaling
		
		glScalef(scalefactor, scalefactor,scalefactor);
		Scaling();



		glTranslatef(-(halfScreenWidth +200), -halfScreenHeight, 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth + 200, halfScreenHeight, -500, 100);
		glPopMatrix();
		// Swap front and back buffers
		glfwSwapBuffers(window);

		// Poll for and process events
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}



void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	//std::cout << key << std::endl;

	const GLfloat rotationSpeed = 10;

	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_UP:
			rotationx -= rotationSpeed;
			break;
		case GLFW_KEY_DOWN:
			rotationx += rotationSpeed;
			break;
		case GLFW_KEY_RIGHT:
			rotationy += rotationSpeed;
			break;
		case GLFW_KEY_LEFT:
			rotationy -= rotationSpeed;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_W:
			rotationx1 -= rotationSpeed;
			break;
		case GLFW_KEY_S:
			rotationx1 += rotationSpeed;
			break;
		case GLFW_KEY_D:
			rotationy1 += rotationSpeed;
			break;
		case GLFW_KEY_A:
			rotationy1 -= rotationSpeed;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_T:
			rotationx2 -= rotationSpeed;
			break;
		case GLFW_KEY_G:
			rotationx2 += rotationSpeed;
			break;
		case GLFW_KEY_F:
			rotationy2 += rotationSpeed;
			break;
		case GLFW_KEY_H:
			rotationy2 -= rotationSpeed;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_X:
			rotationx3 -= rotationSpeed;
			break;
		case GLFW_KEY_V:
			rotationx3 += rotationSpeed;
			break;
		case GLFW_KEY_C:
			rotationy3 += rotationSpeed;
			break;
		case GLFW_KEY_D:
			rotationy3 -= rotationSpeed;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_F1:
			red = 255;
			green = 0;
			blue = 0;
			break;
		case GLFW_KEY_F2:
			red = 0;
			green = 255;
			blue = 0;
			break;
		case GLFW_KEY_F3:
			red = 0;
			green = 0;
			blue = 255;
			break;
		case GLFW_KEY_F4:
			red = 255;
			green = 0;
			blue = 255;
			break;
		}
	}
}


void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
{
	GLfloat halfSideLength = edgeLength * 0.5f;

	GLfloat vertices[] =
	{
		// front face
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left

		// back face
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left

		// left face
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left

		// right face
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left

		// top face
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left

		// top face
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
	};



	//color
	GLfloat colors[] =
	{
	0, 0, 0,
	0, 0, 1,
	0, 1, 1,
	0, 1, 0,
	1, 0, 0,
	1, 0, 1,
	1, 1, 1,
	1, 1, 0,
	0, 0, 0,
	0, 0, 1,
	1, 0, 1,
	1, 0, 0,
	0, 1, 0,
	0, 1, 1,
	1, 1, 1,
	1, 1, 0,
	0, 0, 0,
	0, 1, 0,
	1, 1, 0,
	1, 0, 0,
	0, 0, 1,
	0, 1, 1,
	1, 1, 1,
	1, 0, 1
	};


	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glColor3f(colors[0], colors[1], colors[2]);
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertices);

	//color enable
	glEnableClientState(GL_COLOR_ARRAY);
	glColorPointer(3, GL_FLOAT, 0, colors);

	glDrawArrays(GL_QUADS, 0, 24);

	glDisableClientState(GL_VERTEX_ARRAY);
}//draw cube closed

void Scaling()
{
	//scale factor conditions, boundaries for zoom in zoom out of the object
	if (scalefactor >= 2.0)
	{
		scaleUp = false;
	}
	if (scalefactor < 0.5)
	{
		scaleUp = true;
	}

	if (scaleUp)
	{
		scalefactor += 0.01;
	}
	else
	{
		scalefactor -= 0.01;
	}
}