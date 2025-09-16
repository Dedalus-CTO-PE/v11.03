create table ceavscaf
(
  cevscat     char(2) default ' ' not null,
  cevsdes     char(35) default ' ' not null,
  cevsseq     char(2) default ' ' not null,
  cevsur1     char(30) default ' ' not null,
  cevsur2     char(30) default ' ' not null,
  cevsud1     char(8) default ' ' not null,
  cevsud2     char(8) default ' ' not null,
  cevsuy1     char(1) default ' ' not null,
  cevsuy2     char(1) default ' ' not null,
  cevsspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceavsca1 on ceavscaf
(
cevscat
);
create unique index ceavsca2 on ceavscaf
(
cevsseq,
cevscat
);
revoke all on ceavscaf from public ; 
grant select on ceavscaf to public ; 
