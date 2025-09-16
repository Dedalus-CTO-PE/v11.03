create table pmslevaf
(
  pmlvuniq    varchar2(10) default ' ' not null,
  pmlvadmn    varchar2(8) default ' ' not null,
  pmlvdate    varchar2(8) default ' ' not null,
  pmlvtime    varchar2(8) default ' ' not null,
  pmlvtype    varchar2(2) default ' ' not null,
  pmlvetyp    varchar2(3) default ' ' not null,
  pmlvstat    varchar2(3) default ' ' not null,
  pmlvdes1    varchar2(50) default ' ' not null,
  pmlvdes2    varchar2(50) default ' ' not null,
  pmlvspar    varchar2(80) default ' ' not null,
  pmlvwebc    varchar2(10) default ' ' not null,
  pmlvdatc    varchar2(8) default ' ' not null,
  pmlvtimc    varchar2(8) default ' ' not null,
  pmlvwebu    varchar2(10) default ' ' not null,
  pmlvdatu    varchar2(8) default ' ' not null,
  pmlvtimu    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsleva1 primary key( 
pmlvuniq,
pmlvadmn,
pmlvdate,
pmlvtime,
pmlvtype,
pmlvetyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
