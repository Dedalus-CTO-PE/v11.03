create table webetraf
(
  wbetstat    varchar2(1) default ' ' not null,
  wbettype    varchar2(2) default ' ' not null,
  wbettrid    varchar2(24) default ' ' not null,
  wbetcdte    varchar2(8) default ' ' not null,
  wbetctim    varchar2(8) default ' ' not null,
  wbetbatn    varchar2(8) default ' ' not null,
  wbetinvn    varchar2(8) default ' ' not null,
  wbetudte    varchar2(8) default ' ' not null,
  wbetutim    varchar2(8) default ' ' not null,
  wbetlocn    varchar2(8) default ' ' not null,
  wbetsnid    varchar2(60) default ' ' not null,
  wbetfdtm    varchar2(14) default ' ' not null,
  wbettdtm    varchar2(14) default ' ' not null,
  wbeteror    varchar2(4) default ' ' not null,
  wbetmodl    varchar2(1) default ' ' not null,
  wbetmsid    varchar2(36) default ' ' not null,
  wbetstrd    varchar2(24) default ' ' not null,
  wbetsmid    varchar2(36) default ' ' not null,
  wbetassn    varchar2(40) default ' ' not null,
  wbetlodt    varchar2(25) default ' ' not null,
  wbetpsta    varchar2(30) default ' ' not null,
  wbetrefr    varchar2(10) default ' ' not null,
  wbetreps    varchar2(20) default ' ' not null,
  wbetrtty    varchar2(100) default ' ' not null,
  wbetspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webetra1 primary key( 
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webetra2 on webetraf
(
wbetcdte,
wbetctim,
wbetstat,
wbettype,
wbetlocn,
wbettrid
)
  tablespace pas_indx; 
create unique index webetra3 on webetraf
(
wbetstat,
wbetcdte,
wbetctim,
wbettype,
wbetlocn,
wbettrid
)
  tablespace pas_indx; 
create unique index webetra4 on webetraf
(
wbettrid,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim
)
  tablespace pas_indx; 
create unique index webetra5 on webetraf
(
wbetstrd,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
)
  tablespace pas_indx; 
create unique index webetra6 on webetraf
(
wbetmsid,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
)
  tablespace pas_indx; 
create unique index webetra7 on webetraf
(
wbetsmid,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
)
  tablespace pas_indx; 
