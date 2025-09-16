create table ceaspcaf
(
  cespspc     char(3) default ' ' not null,
  cespdes     char(35) default ' ' not null,
  cespur1     char(30) default ' ' not null,
  cespur2     char(30) default ' ' not null,
  cespud1     char(8) default ' ' not null,
  cespud2     char(8) default ' ' not null,
  cespuy1     char(1) default ' ' not null,
  cespuy2     char(1) default ' ' not null,
  cespspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceaspca1 on ceaspcaf
(
cespspc
);
revoke all on ceaspcaf from public ; 
grant select on ceaspcaf to public ; 
