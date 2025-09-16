create table watlpcaf
(
  wtlpsche    varchar2(5) default ' ' not null,
  wtlpurno    varchar2(8) default ' ' not null,
  wtlppcod    varchar2(9) default ' ' not null,
  wtlppcnt    varchar2(2) default ' ' not null,
  wtlpprnt    varchar2(6) default ' ' not null,
  wtlpcopy    number(3,0) default 0 not null,
  wtlplett    varchar2(3) default ' ' not null,
  wtlpwebu    varchar2(10) default ' ' not null,
  wtlprdat    varchar2(8) default ' ' not null,
  wtlprtim    varchar2(8) default ' ' not null,
  wtlpspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watlpca1 primary key( 
wtlpsche)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
