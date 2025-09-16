create table pmsutxaf
(
  pmuxurno    varchar2(8) default ' ' not null,
  pmuxatyp    varchar2(3) default ' ' not null,
  pmuxctyp    varchar2(3) default ' ' not null,
  pmuxhfnd    varchar2(6) default ' ' not null,
  pmuxhtab    varchar2(3) default ' ' not null,
  pmuxexpd    varchar2(8) default ' ' not null,
  pmuxcomt    varchar2(3) default ' ' not null,
  pmuxnnum    varchar2(6) default ' ' not null,
  pmuxlnum    varchar2(3) default ' ' not null,
  pmuxcomm    varchar2(100) default ' ' not null,
  pmuxspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsutxa1 primary key( 
pmuxurno,
pmuxatyp,
pmuxctyp,
pmuxhfnd,
pmuxhtab,
pmuxexpd,
pmuxcomt,
pmuxnnum,
pmuxlnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
