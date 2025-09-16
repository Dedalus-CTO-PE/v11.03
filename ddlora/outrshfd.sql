create table outrshaf
(
  oprssite    varchar2(6) default ' ' not null,
  oprsclin    varchar2(6) default ' ' not null,
  oprsdate    varchar2(8) default ' ' not null,
  oprsstrt    varchar2(5) default ' ' not null,
  doprsslo    varchar2(3) default ' ' not null,
  oprstime    varchar2(5) default ' ' not null,
  doprsout    varchar2(8) default ' ' not null,
  doprsuni    varchar2(3) default ' ' not null,
  oprsrdte    varchar2(8) default ' ' not null,
  oprsrtim    varchar2(8) default ' ' not null,
  oprsreas    varchar2(3) default ' ' not null,
  oprsncli    varchar2(6) default ' ' not null,
  oprsndat    varchar2(8) default ' ' not null,
  oprsnstr    varchar2(5) default ' ' not null,
  doprsnsl    varchar2(3) default ' ' not null,
  oprsntim    varchar2(5) default ' ' not null,
  oprsoper    varchar2(4) default ' ' not null,
  oprsclty    varchar2(6) default ' ' not null,
  oprsvtyp    varchar2(3) default ' ' not null,
  oprscomp    varchar2(3) default ' ' not null,
  oprsnmds    varchar2(3) default ' ' not null,
  oprssrvd    varchar2(3) default ' ' not null,
  oprscare    varchar2(3) default ' ' not null,
  oprstcod    varchar2(3) default ' ' not null,
  oprsbkdt    varchar2(16) default ' ' not null,
  oprsspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outrsha1 primary key( 
doprsout,
doprsuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outrsha2 on outrshaf
(
oprssite,
oprsclin,
oprsdate,
oprsstrt,
doprsout,
doprsuni
)
  tablespace pas_indx; 
create unique index outrsha3 on outrshaf
(
oprssite,
oprsrdte,
doprsout,
doprsuni
)
  tablespace pas_indx; 
