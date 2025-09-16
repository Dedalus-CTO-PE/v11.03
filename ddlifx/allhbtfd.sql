create table allhbtaf
(
  alhbfnam    char(20) default ' ' not null,
  alhbbnum    char(20) default ' ' not null,
  alhbstat    char(1) default ' ' not null,
  alhburno    char(8) default ' ' not null,
  alhbnbtn    char(20) default ' ' not null,
  alhbpbtn    char(20) default ' ' not null,
  alhbspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index allhbta1 on allhbtaf
(
alhbfnam,
alhbbnum
);
create unique index allhbta2 on allhbtaf
(
alhbbnum,
alhbfnam
);
revoke all on allhbtaf from public ; 
grant select on allhbtaf to public ; 
