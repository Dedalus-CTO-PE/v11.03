create table scrtfcaf
(
  sctffun     char(8) default ' ' not null,
  lf          char(1)
);
create unique index scrtfca1 on scrtfcaf
(
sctffun
);
revoke all on scrtfcaf from public ; 
grant select on scrtfcaf to public ; 
