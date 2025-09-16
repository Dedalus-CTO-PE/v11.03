create table visacmaf
(
  vsacvisn    varchar2(8) default ' ' not null,
  vsacadat    varchar2(8) default ' ' not null,
  vsacatim    varchar2(8) default ' ' not null,
  vsactype    varchar2(3) default ' ' not null,
  vsacline    varchar2(3) default ' ' not null,
  vsacdata    varchar2(100) default ' ' not null,
  vsacspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint visacma1 primary key( 
vsacvisn,
vsacadat,
vsacatim,
vsactype,
vsacline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
