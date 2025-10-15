def main():
    print("Cookie Recipe Calculator")
    print("=" * 40)
    print("\nBase recipe (48 cookies):")
    print("  - 1.5 cups of sugar")
    print("  - 1 cup of butter")
    print("  - 2.75 cups of flour")
    print("=" * 40)
    
    base_cookies = 48
    base_sugar = 1.5
    base_butter = 1.0
    base_flour = 2.75
    
    cookies_wanted = int(input("\nHow many cookies do you want to make? "))
    
    ratio = cookies_wanted / base_cookies
    
    sugar_needed = base_sugar * ratio
    butter_needed = base_butter * ratio
    flour_needed = base_flour * ratio
    
    print(f"\nTo make {cookies_wanted} cookies, you will need:")
    print(f"  - {sugar_needed:.2f} cups of sugar")
    print(f"  - {butter_needed:.2f} cups of butter")
    print(f"  - {flour_needed:.2f} cups of flour")

if __name__ == "__main__":
    main()
