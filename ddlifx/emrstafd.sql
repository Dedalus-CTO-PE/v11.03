create table emrstaaf
(
  emstcata    char(2) default ' ' not null,
  emstcode    char(3) default ' ' not null,
  emstdate    char(8) default ' ' not null,
  emstnumb    decimal(6,0) default 0 not null,
  emstspar    char(32) default ' ' not null,
  lf          char(1)
);
create unique index emrstaa1 on emrstaaf
(
emstcata,
emstcode,
emstdate
);
revoke all on emrstaaf from public ; 
grant select on emrstaaf to public ; 
