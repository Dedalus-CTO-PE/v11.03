create table pmsudtaf
(
  pmuturno    varchar2(8) default ' ' not null,
  pmutatyp    varchar2(3) default ' ' not null,
  pmutctyp    varchar2(3) default ' ' not null,
  pmuthfnd    varchar2(6) default ' ' not null,
  pmuthtab    varchar2(3) default ' ' not null,
  pmutexpd    varchar2(8) default ' ' not null,
  pmutcomt    varchar2(3) default ' ' not null,
  pmutnnum    varchar2(6) default ' ' not null,
  pmutidat    varchar2(8) default ' ' not null,
  pmutitim    varchar2(8) default ' ' not null,
  pmutiuid    varchar2(10) default ' ' not null,
  pmutdind    varchar2(1) default ' ' not null,
  pmutddat    varchar2(8) default ' ' not null,
  pmutdtim    varchar2(8) default ' ' not null,
  pmutduid    varchar2(10) default ' ' not null,
  pmutspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsudta1 primary key( 
pmuturno,
pmutatyp,
pmutctyp,
pmuthfnd,
pmuthtab,
pmutexpd,
pmutcomt,
pmutnnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
