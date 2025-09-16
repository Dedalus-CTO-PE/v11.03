create table sinrebaf
(
  sirbtyp     varchar2(1) default ' ' not null,
  sirbreq     varchar2(7) default ' ' not null,
  sirbwar     varchar2(5) default ' ' not null,
  sirbcat     varchar2(7) default ' ' not null,
  sirbrqt     number(14,2) default 0 not null,
  sirbiqt     number(14,2) default 0 not null,
  sirbamt     number(14,2) default 0 not null,
  sirbdat     varchar2(8) default ' ' not null,
  sirbbch     varchar2(5) default ' ' not null,
  sirbled     varchar2(2) default ' ' not null,
  sirbacc     varchar2(12) default ' ' not null,
  sirbspa     varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinreba1 primary key( 
sirbtyp,
sirbreq,
sirbwar,
sirbcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinreba2 on sinrebaf
(
sirbcat,
sirbtyp,
sirbreq,
sirbwar
)
  tablespace pas_indx; 
create unique index sinreba3 on sinrebaf
(
sirbbch,
sirbled,
sirbacc,
sirbtyp,
sirbreq,
sirbwar,
sirbcat
)
  tablespace pas_indx; 
create unique index sinreba4 on sinrebaf
(
sirbdat,
sirbtyp,
sirbreq,
sirbwar,
sirbcat
)
  tablespace pas_indx; 
