create table debcreaf
(
  dbcrdeb     char(8) default ' ' not null,
  dbcrrec     char(12) default ' ' not null,
  dbcrtyp     char(1) default ' ' not null,
  dbcrrst     char(1) default ' ' not null,
  dbcrddt     char(8) default ' ' not null,
  dbcrdtm     char(6) default ' ' not null,
  dbcrdrw     char(30) default ' ' not null,
  dbcrchq     char(8) default ' ' not null,
  dbcrbnk     char(6) default ' ' not null,
  dbcrbra     char(25) default ' ' not null,
  dbcramt     decimal(14,2) default 0 not null,
  dbcrdat     char(8) default ' ' not null,
  dbcrusr     char(4) default ' ' not null,
  dbcridt     char(8) default ' ' not null,
  dbcritm     char(6) default ' ' not null,
  dbcrur1     char(25) default ' ' not null,
  dbcrur2     char(25) default ' ' not null,
  dbcrud1     char(8) default ' ' not null,
  dbcrud2     char(8) default ' ' not null,
  dbcruy1     char(1) default ' ' not null,
  dbcruy2     char(1) default ' ' not null,
  dbcruc1     char(3) default ' ' not null,
  dbcruc2     char(3) default ' ' not null,
  dbcrspa     char(18) default ' ' not null,
  lf          char(1)
);
create unique index debcrea1 on debcreaf
(
dbcrrec
);
create unique index debcrea2 on debcreaf
(
dbcrrst,
dbcrrec
);
create unique index debcrea3 on debcreaf
(
dbcrddt,
dbcrdtm,
dbcrrec
);
revoke all on debcreaf from public ; 
grant select on debcreaf to public ; 
