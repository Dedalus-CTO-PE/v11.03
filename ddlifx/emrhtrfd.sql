create table emrhtraf
(
  emhtnumb    char(8) default ' ' not null,
  emhtinvn    char(8) default ' ' not null,
  emhttrns    char(6) default ' ' not null,
  emhtdesc    char(30) default ' ' not null,
  emhtamtt    decimal(14,2) default 0 not null,
  emhtdate    char(8) default ' ' not null,
  emhtitem    char(9) default ' ' not null,
  emhtttyp    char(2) default ' ' not null,
  emhtpayt    decimal(1,0) default 0 not null,
  emhtrecp    char(12) default ' ' not null,
  emhtinvp    decimal(1,0) default 0 not null,
  emhtrtyp    char(1) default ' ' not null,
  emhtmisg    char(3) default ' ' not null,
  emhtdtyp    char(3) default ' ' not null,
  emhtbatc    char(8) default ' ' not null,
  emhtppor    decimal(14,2) default 0 not null,
  emhtrpor    decimal(14,2) default 0 not null,
  emhtninv    char(1) default ' ' not null,
  emhtserv    decimal(2,0) default 0 not null,
  emhteffd    char(8) default ' ' not null,
  emhtpdtm    decimal(1,0) default 0 not null,
  emhtgsta    decimal(1,0) default 0 not null,
  emhtgstc    char(6) default ' ' not null,
  emhtgstm    decimal(14,2) default 0 not null,
  emhtcrst    char(1) default ' ' not null,
  emhtbtch    char(16) default ' ' not null,
  emhtsubn    char(3) default ' ' not null,
  emhtedad    char(10) default ' ' not null,
  emhtsvtm    char(8) default ' ' not null,
  emhtschf    decimal(5,2) default 0 not null,
  emhtityp    char(1) default ' ' not null,
  emhtrbrs    char(3) default ' ' not null,
  emhtpcod    char(3) default ' ' not null,
  emhtacoi    char(1) default ' ' not null,
  emhtdsov    char(1) default ' ' not null,
  emhtstxt    char(50) default ' ' not null,
  emhtlspn    char(6) default ' ' not null,
  emhtmpov    char(1) default ' ' not null,
  emhtnmpt    char(2) default ' ' not null,
  emhtsdcd    char(3) default ' ' not null,
  emhttdur    char(3) default ' ' not null,
  emhtrovr    char(3) default ' ' not null,
  emhtpinv    char(8) default ' ' not null,
  emhtptrn    char(6) default ' ' not null,
  emhtspar    char(68) default ' ' not null,
  lf          char(1)
);
create unique index emrhtra1 on emrhtraf
(
emhtnumb,
emhtinvn,
emhttrns
);
create unique index emrhtra2 on emrhtraf
(
emhtnumb,
emhtpinv,
emhtptrn,
emhtinvn,
emhttrns
);
revoke all on emrhtraf from public ; 
grant select on emrhtraf to public ; 
