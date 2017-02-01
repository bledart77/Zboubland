rm -rf libft
rm -rf fillit
rm -rf get_next_line
rm -rf ft_printf
mkdir libft
mkdir fillit
mkdir get_next_line
mkdir get_next_line/libft
mkdir get_next_line/libft/includes
mkdir ft_printf
mkdir ft_printf/includes
mkdir ft_printf/libft
mkdir ft_printf/src
cp ../Projects/libft/* libft/
cp ../Projects/fillit/* fillit/
cp ../Projects/get_next_line/* get_next_line/
cp ../Projects/get_next_line/libft/libft.a get_next_line/libft/
cp ../Projects/get_next_line/libft/includes/libft.h get_next_line/libft/include
cp ../Projects/ft_printf/* ./ft_printf
cp ../Projects/ft_printf/inc/* ./ft_printf/includes/
cp ../Projects/ft_printf/lib/* ./ft_printf/libft/
cp ../Projects/ft_printf/src/* ./ft_printf/src/
git add ./*
git commit -m 'r'
git push
