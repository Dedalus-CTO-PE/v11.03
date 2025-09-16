create table pmsptdaf
(
pmpetrdt    varchar2(8),
pmpetrtm    varchar2(8),
pmpevisn    varchar2(8),
pmpetran    varchar2(6),
pmpeitem    varchar2(9),
pmpeurno    varchar2(8),
pmpetrty    varchar2(1),
pmpeides    varchar2(30),
pmpeserv    number(5,0),
pmpetdat    varchar2(8),
pmpeamtt    number(14,2),
pmpeamtp    number(14,2),
pmperbat    number(14,2),
pmpegstc    varchar2(6),
pmpegstm    number(14,2),
pmpewusr    varchar2(10),
pmpeexfn    varchar2(25),
pmpedtex    varchar2(8),
pmpetmex    varchar2(8),
pmpedtrn    varchar2(6),
pmpespar    varchar2(20),
lf          varchar2(1),
constraint pmsptda1 primary key( 
pmpetrdt,
pmpetrtm,
pmpevisn,
pmpetran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsptdaf for pmsptdaf;
create unique index pmsptda2 on pmsptdaf
(
pmpevisn,
pmpetrdt,
pmpetrtm,
pmpetran
)
  tablespace pas_indx; 
create unique index pmsptda3 on pmsptdaf
(
pmpeurno,
pmpevisn,
pmpetrdt,
pmpetrtm,
pmpetran
)
  tablespace pas_indx; 
create unique index pmsptda4 on pmsptdaf
(
pmpevisn,
pmpetran,
pmpetrdt,
pmpetrtm
)
  tablespace pas_indx; 
create unique index pmsptda5 on pmsptdaf
(
pmpeexfn,
pmpetrdt,
pmpetrtm,
pmpevisn,
pmpetran
)
  tablespace pas_indx; 
