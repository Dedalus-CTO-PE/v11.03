create table emrvpraf
(
  demvpadm    char(8) default ' ' not null,
  emvpcode    char(9) default ' ' not null,
  emvpsend    char(1) default ' ' not null,
  emvpspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index emrvpra1 on emrvpraf
(
demvpadm,
emvpcode
);
revoke all on emrvpraf from public ; 
grant select on emrvpraf to public ; 
