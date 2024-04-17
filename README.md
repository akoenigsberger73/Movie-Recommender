# Movie-Recommender
Neural Network Models for Recommender Systems: A Case Study on Spotify and Netflix's Recommender Algorithms

This will be a movie recommender based on user inputted parameters. The user will input desired genre, decade of release, minimum critic score, and maturity rating and based on these criteria will be shown movie recommendations that fit these critera. It will be modeled after a neural network with each parameter representing a layer of a neural network. 

Install and run on CLion or other C++ compatible IDE. Make sure the movies.txt file is in the folder with the rest of the files, as this is the file containing the movie database.

To use, simply run the program, and follow the text-based prompts using the proper provided possible inputs. 

The structure of the code is fairly simple. There is only one class titled Movie that contains a source and header file. This class contains the code necessary to make Movie objects from the movie database. The main file contains the bulk of the code that is run. It reads the information from the movies.txt file, and creates a Movie object of each movie in the database. It then prompts the user for the necessary input data. From here, it checks to see of any movie in the database matches the user inputted criteria, by passing Movie objects that match each criterion from list to list, with each check representing one of the different criterion. The final list is printed, as these outputs are the movies within the database that match the user's requests. 
