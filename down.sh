curl -o ~/.vimrc https://raw.githubusercontent.com/fat-fighter/ubuntu-setup/master/includes/vim.config
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim
mkdir -p ~/.vim/colors
curl -o ~/.vim/colors/fatdark.vim https://raw.githubusercontent.com/fat-fighter/ubuntu-setup/master/includes/fatdark.vim
curl -o ~/.vim/bundle/vim-airline-themes/autoload/airline/themes/fatair.vim https://raw.githubusercontent.com/fat-fighter/ubuntu-setup/master/includes/fatair.vim
