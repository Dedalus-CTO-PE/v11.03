create table allextaf
(
  alexvisn    varchar2(8) default ' ' not null,
  alexextr    varchar2(8) default ' ' not null,
  alexrdat    varchar2(8) default ' ' not null,
  alexahcp    varchar2(10) default ' ' not null,
  alexcast    varchar2(10) default ' ' not null,
  alexrref    varchar2(3) default ' ' not null,
  alexreft    varchar2(3) default ' ' not null,
  alexorcd    varchar2(6) default ' ' not null,
  alexhcpc    varchar2(10) default ' ' not null,
  alexcom1    varchar2(50) default ' ' not null,
  alexcom2    varchar2(50) default ' ' not null,
  alexcom3    varchar2(50) default ' ' not null,
  alexcom4    varchar2(50) default ' ' not null,
  alexcdat    varchar2(8) default ' ' not null,
  alexctim    varchar2(8) default ' ' not null,
  alexcuid    varchar2(10) default ' ' not null,
  alexudat    varchar2(8) default ' ' not null,
  alexutim    varchar2(8) default ' ' not null,
  alexuuid    varchar2(10) default ' ' not null,
  alexmohr    varchar2(1) default ' ' not null,
  alexrcst    varchar2(1) default ' ' not null,
  alexspar    varchar2(98) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allexta1 primary key( 
alexvisn,
alexextr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allexta2 on allextaf
(
alexrdat,
alexvisn,
alexextr
)
  tablespace pas_indx; 
