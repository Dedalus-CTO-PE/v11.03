create table rcpcrsaf
(
  rccrrecn    char(12) default ' ' not null,
  rccruniq    char(3) default ' ' not null,
  rccrcrty    char(3) default ' ' not null,
  rccraccn    char(15) default ' ' not null,
  rccrsamn    decimal(14,2) default 0 not null,
  rccrsgst    decimal(14,2) default 0 not null,
  rccrspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index rcpcrsa1 on rcpcrsaf
(
rccrrecn,
rccruniq
);
revoke all on rcpcrsaf from public ; 
grant select on rcpcrsaf to public ; 
