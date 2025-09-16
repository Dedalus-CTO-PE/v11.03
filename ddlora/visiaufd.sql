create table visiauaf
(
  vsiacdat    varchar2(8) default ' ' not null,
  vsiactim    varchar2(8) default ' ' not null,
  vsiartyp    varchar2(1) default ' ' not null,
  vsiavisn    varchar2(8) default ' ' not null,
  vsiadate    varchar2(8) default ' ' not null,
  vsiatime    varchar2(8) default ' ' not null,
  vsiatype    number(2,0) default 0 not null,
  vsiasubk    varchar2(50) default ' ' not null,
  vsiawuid    varchar2(10) default ' ' not null,
  vsialng1    varchar2(3) default ' ' not null,
  vsialng2    varchar2(3) default ' ' not null,
  vsialng3    varchar2(3) default ' ' not null,
  vsianotf    varchar2(1) default ' ' not null,
  vsiaconf    varchar2(1) default ' ' not null,
  vsiaspar    varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint visiaua1 primary key( 
vsiacdat,
vsiactim,
vsiartyp,
vsiavisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index visiaua2 on visiauaf
(
vsiavisn,
vsiacdat,
vsiactim,
vsiartyp
)
  tablespace pas_indx; 
