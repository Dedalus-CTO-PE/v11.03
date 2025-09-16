create table pathospf
(
hoscode     char(4),
dhosindx    char(2),
hosdesc     char(30),
hosrun      char(30),
hosrunr     char(30),
pthoactv    char(1),
pthorunb    char(20),
hosspar     char(10),
lf          char(1)
);
create unique index pathosp1 on pathospf
(
hoscode
);
create unique index pathosp2 on pathospf
(
dhosindx
);
revoke all on pathospf from public ; 
grant select on pathospf to public ; 
