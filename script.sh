rm -rf libft
rm -rf fillit
rm -rf get_next_line
mkdir libft
mkdir fillit
mkdir get_next_line
mkdir get_next_line/libft
mkdir get_next_line/libft/include
cp ../Projects/libft/* libft/
cp ../Projects/fillit/* fillit/
cp ../Projects/get_next_line/* get_next_line/
cp ../Projects/get_next_line/libft/libft.a get_next_line/libft/
cp ../Projects/get_next_line/libft/include/libft.h get_next_line/libft/include
git add ./*
git commit -m 'r'
git push
