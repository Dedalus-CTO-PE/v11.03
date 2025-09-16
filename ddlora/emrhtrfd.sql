create table emrhtraf
(
  emhtnumb    varchar2(8) default ' ' not null,
  emhtinvn    varchar2(8) default ' ' not null,
  emhttrns    varchar2(6) default ' ' not null,
  emhtdesc    varchar2(30) default ' ' not null,
  emhtamtt    number(14,2) default 0 not null,
  emhtdate    varchar2(8) default ' ' not null,
  emhtitem    varchar2(9) default ' ' not null,
  emhtttyp    varchar2(2) default ' ' not null,
  emhtpayt    number(1,0) default 0 not null,
  emhtrecp    varchar2(12) default ' ' not null,
  emhtinvp    number(1,0) default 0 not null,
  emhtrtyp    varchar2(1) default ' ' not null,
  emhtmisg    varchar2(3) default ' ' not null,
  emhtdtyp    varchar2(3) default ' ' not null,
  emhtbatc    varchar2(8) default ' ' not null,
  emhtppor    number(14,2) default 0 not null,
  emhtrpor    number(14,2) default 0 not null,
  emhtninv    varchar2(1) default ' ' not null,
  emhtserv    number(2,0) default 0 not null,
  emhteffd    varchar2(8) default ' ' not null,
  emhtpdtm    number(1,0) default 0 not null,
  emhtgsta    number(1,0) default 0 not null,
  emhtgstc    varchar2(6) default ' ' not null,
  emhtgstm    number(14,2) default 0 not null,
  emhtcrst    varchar2(1) default ' ' not null,
  emhtbtch    varchar2(16) default ' ' not null,
  emhtsubn    varchar2(3) default ' ' not null,
  emhtedad    varchar2(10) default ' ' not null,
  emhtsvtm    varchar2(8) default ' ' not null,
  emhtschf    number(5,2) default 0 not null,
  emhtityp    varchar2(1) default ' ' not null,
  emhtrbrs    varchar2(3) default ' ' not null,
  emhtpcod    varchar2(3) default ' ' not null,
  emhtacoi    varchar2(1) default ' ' not null,
  emhtdsov    varchar2(1) default ' ' not null,
  emhtstxt    varchar2(50) default ' ' not null,
  emhtlspn    varchar2(6) default ' ' not null,
  emhtmpov    varchar2(1) default ' ' not null,
  emhtnmpt    varchar2(2) default ' ' not null,
  emhtsdcd    varchar2(3) default ' ' not null,
  emhttdur    varchar2(3) default ' ' not null,
  emhtrovr    varchar2(3) default ' ' not null,
  emhtpinv    varchar2(8) default ' ' not null,
  emhtptrn    varchar2(6) default ' ' not null,
  emhtspar    varchar2(68) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrhtra1 primary key( 
emhtnumb,
emhtinvn,
emhttrns)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrhtra2 on emrhtraf
(
emhtnumb,
emhtpinv,
emhtptrn,
emhtinvn,
emhttrns
)
  tablespace pas_indx; 
