create table scrgphaf
(
  scgpper     char(3) default ' ' not null,
  scgpitm     char(3) default ' ' not null,
  scgpval     char(21) default ' ' not null,
  scgpdes     char(80) default ' ' not null,
  lf          char(1)
);
create unique index scrgpha1 on scrgphaf
(
scgpper,
scgpitm
);
create unique index scrgpha2 on scrgphaf
(
scgpper,
scgpval,
scgpitm
);
revoke all on scrgphaf from public ; 
grant select on scrgphaf to public ; 
