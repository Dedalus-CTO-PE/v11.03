create table fmsayyyy
(
  fmsrbat     char(5) default ' ' not null,
  fmsruniq    char(3) default ' ' not null,
  fmsrledg    char(2) default ' ' not null,
  fmsracct    char(12) default ' ' not null,
  fmsrdate    char(8) default ' ' not null,
  fmsrref     char(15) default ' ' not null,
  fmsrunit    decimal(17,5) default 0 not null,
  fmsrspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index fmsstra1 on fmsayyyy
(
fmsrbat,
fmsruniq
);
create unique index fmsstra2 on fmsayyyy
(
fmsrledg,
fmsracct,
fmsrdate,
fmsrbat,
fmsruniq
);
revoke all on fmsayyyy from public ; 
grant select on fmsayyyy to public ; 
