# Set the base image to use
FROM gcc:latest
# Copy the C program into the container
COPY ProgramEc.c .
# Compile the C program
RUN gcc -o ProgramEc ProgramEc.c
# Set the command to run when the container starts
CMD ["./ProgramEc"]
