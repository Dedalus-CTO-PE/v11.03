create table patre1af
(
  dpkadmn     char(8) default ' ' not null,
  pkname      char(80) default ' ' not null,
  pkadd1      char(35) default ' ' not null,
  pkadd2      char(35) default ' ' not null,
  pksubr      char(35) default ' ' not null,
  pkadd4      char(35) default ' ' not null,
  pkpost      char(8) default ' ' not null,
  pktelep     char(20) default ' ' not null,
  pkteleb     char(20) default ' ' not null,
  pkrelp      char(10) default ' ' not null,
  ptremobl    char(20) default ' ' not null,
  ptresnam    char(40) default ' ' not null,
  ptregnam    char(40) default ' ' not null,
  ptrespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patre1a1 on patre1af
(
dpkadmn
);
revoke all on patre1af from public ; 
grant select on patre1af to public ; 
