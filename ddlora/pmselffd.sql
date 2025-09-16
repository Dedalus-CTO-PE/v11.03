create table pmselfaf
(
  pmefelgn    varchar2(8) default ' ' not null,
  pmefurno    varchar2(8) default ' ' not null,
  pmefoecc    varchar2(1) default ' ' not null,
  pmeftitl    varchar2(4) default ' ' not null,
  pmeffnam    varchar2(40) default ' ' not null,
  pmefsnam    varchar2(40) default ' ' not null,
  pmefhfgn    varchar2(40) default ' ' not null,
  pmefhfsn    varchar2(40) default ' ' not null,
  pmefgend    varchar2(1) default ' ' not null,
  pmefbdat    varchar2(8) default ' ' not null,
  pmefeadt    varchar2(8) default ' ' not null,
  pmefisty    varchar2(3) default ' ' not null,
  pmefplos    varchar2(3) default ' ' not null,
  pmefdint    varchar2(3) default ' ' not null,
  pmefpeai    varchar2(1) default ' ' not null,
  pmefemad    varchar2(1) default ' ' not null,
  pmefpric    varchar2(3) default ' ' not null,
  pmefprim    varchar2(9) default ' ' not null,
  pmefclty    varchar2(3) default ' ' not null,
  pmefhfnd    varchar2(6) default ' ' not null,
  pmefhfnt    varchar2(8) default ' ' not null,
  pmefhfmn    varchar2(19) default ' ' not null,
  pmefdiag    varchar2(50) default ' ' not null,
  pmefsrv1    varchar2(9) default ' ' not null,
  pmefsrv2    varchar2(9) default ' ' not null,
  pmefsrv3    varchar2(9) default ' ' not null,
  pmefsrv4    varchar2(9) default ' ' not null,
  pmefsrv5    varchar2(9) default ' ' not null,
  pmefcuid    varchar2(10) default ' ' not null,
  pmefcdat    varchar2(8) default ' ' not null,
  pmefctim    varchar2(8) default ' ' not null,
  pmefdvan    varchar2(10) default ' ' not null,
  pmefvisn    varchar2(8) default ' ' not null,
  pmefcntr    varchar2(3) default ' ' not null,
  pmefflag    varchar2(1) default ' ' not null,
  pmefspar    varchar2(88) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmselfa1 primary key( 
pmefelgn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmselfa2 on pmselfaf
(
pmefurno,
pmefelgn
)
  tablespace pas_indx; 
create unique index pmselfa3 on pmselfaf
(
pmefsnam,
pmeffnam,
pmefelgn
)
  tablespace pas_indx; 
create unique index pmselfa4 on pmselfaf
(
pmeffnam,
pmefsnam,
pmefelgn
)
  tablespace pas_indx; 
