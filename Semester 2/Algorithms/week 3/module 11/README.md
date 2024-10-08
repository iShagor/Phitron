# Module 11

DSU

1. Cycle Detect
2. MST (Minimum Spanning Tree)
3. Kruska_s Algorithm for MST

Minimum Spanning Tree (MST) একটি গ্রাফের এমন একটি স্প্যানিং ট্রি, যেখানে গ্রাফের সবগুলো নোড অন্তর্ভুক্ত থাকে এবং ট্রির প্রান্তগুলোর ওজনের সমষ্টি সর্বনিম্ন হয়। MST-তে কোনো সাইকেল (cycle) থাকে না এবং গ্রাফের প্রতিটি নোড একটি মাত্র পাথ দিয়ে সংযুক্ত থাকে।

### বৈশিষ্ট্য:

1. **Minimum Weight**: MST-তে প্রান্তগুলোর (edges) ওজনের (weight) মোট যোগফল সব স্প্যানিং ট্রিগুলোর মধ্যে সর্বনিম্ন হয়।
2. **Number of Edges**: যদি গ্রাফে \(V\) সংখ্যক ভেরটেক্স থাকে, তবে MST-তে ঠিক \(V-1\) টি এজ থাকবে।
3. **Acyclic**: MST-তে কোনো সাইকেল (cycle) থাকে না।
4. **Connected**: MST একটি সংযুক্ত গ্রাফের উপর ভিত্তি করে তৈরি হয়, অর্থাৎ সব নোড MST তে সংযুক্ত থাকে।

### উদাহরণ:

একটি গ্রাফের ৪টি নোড এবং কিছু প্রান্তের ওজন দেওয়া থাকলে, সেই প্রান্তগুলো থেকে এমনভাবে প্রান্তগুলো নির্বাচন করতে হবে যাতে সব নোড সংযুক্ত থাকে এবং মোট ওজন সর্বনিম্ন হয়। এই নির্বাচিত প্রান্তগুলোর সমষ্টি হবে MST।

### MST বের করার অ্যালগরিদম:

1. **Prim’s Algorithm**: ধাপে ধাপে একটি নোড থেকে গ্রাফের অন্য নোডগুলোতে সর্বনিম্ন ওজনের প্রান্ত যোগ করে MST তৈরি করা হয়।
2. **Kruskal’s Algorithm**: প্রান্তগুলোকে ওজন অনুযায়ী বাছাই করে ছোট থেকে বড় প্রান্ত যোগ করার মাধ্যমে MST তৈরি করা হয়, যেখানে সাইকেল এড়ানো হয়।

MST সাধারণত নেটওয়ার্ক ডিজাইন, ক্লাস্টারিং, এবং গ্রাফ ভিত্তিক অন্যান্য অপ্টিমাইজেশন সমস্যার সমাধানে ব্যবহৃত হয়।
