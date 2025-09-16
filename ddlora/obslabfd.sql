create table obslabaf
(
  oblbvisn    varchar2(8) default ' ' not null,
  oblbline    varchar2(3) default ' ' not null,
  oblbdesc    varchar2(127) default ' ' not null,
  oblbspar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obslaba1 primary key( 
oblbvisn,
oblbline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
