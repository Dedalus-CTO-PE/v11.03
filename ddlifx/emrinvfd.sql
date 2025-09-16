create table emrinvaf
(
  eminadmn    char(8) default ' ' not null,
  eminrtyp    char(2) default ' ' not null,
  eminrnum    char(3) default ' ' not null,
  eminludt    char(8) default ' ' not null,
  eminlutm    char(6) default ' ' not null,
  eminmcod    char(10) default ' ' not null,
  eminmdat    char(8) default ' ' not null,
  eminmtim    char(6) default ' ' not null,
  eminref1    char(50) default ' ' not null,
  eminref2    char(50) default ' ' not null,
  emincod1    char(3) default ' ' not null,
  emincod2    char(3) default ' ' not null,
  emincod3    char(3) default ' ' not null,
  emincod4    char(3) default ' ' not null,
  emindat1    char(8) default ' ' not null,
  emindat2    char(8) default ' ' not null,
  emintim1    char(5) default ' ' not null,
  emintim2    char(5) default ' ' not null,
  eminamt1    decimal(14,2) default 0 not null,
  eminamt2    decimal(14,2) default 0 not null,
  eminyn01    char(1) default ' ' not null,
  eminyn02    char(1) default ' ' not null,
  eminyn03    char(1) default ' ' not null,
  eminyn04    char(1) default ' ' not null,
  eminspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index emrinva1 on emrinvaf
(
eminadmn,
eminrtyp,
eminrnum
);
revoke all on emrinvaf from public ; 
grant select on emrinvaf to public ; 
