create table patasdaf
(
  ptadclmn    varchar2(3) default ' ' not null,
  ptadhfnd    varchar2(6) default ' ' not null,
  ptadtabt    varchar2(3) default ' ' not null,
  ptadcasm    varchar2(9) default ' ' not null,
  ptadbtyp    varchar2(3) default ' ' not null,
  ptaddes1    varchar2(30) default ' ' not null,
  ptaddes2    varchar2(35) default ' ' not null,
  ptaddreb    number(14,2) default 0 not null,
  ptaddpat    number(14,2) default 0 not null,
  ptadcnid    varchar2(6) default ' ' not null,
  ptadfigr    varchar2(3) default ' ' not null,
  ptadspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patasda1 primary key( 
ptadcnid,
ptadclmn,
ptadhfnd,
ptadtabt,
ptadcasm,
ptadbtyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
