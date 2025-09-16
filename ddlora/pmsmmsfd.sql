create table pmsmmsaf
(
  pmmmvisn    varchar2(8) default ' ' not null,
  pmmmadat    varchar2(8) default ' ' not null,
  pmmmatim    varchar2(8) default ' ' not null,
  pmmmort1    varchar2(1) default ' ' not null,
  pmmmort2    varchar2(1) default ' ' not null,
  pmmmreg1    varchar2(1) default ' ' not null,
  pmmmreg2    varchar2(1) default ' ' not null,
  pmmmattn    varchar2(1) default ' ' not null,
  pmmmrecl    varchar2(1) default ' ' not null,
  pmmmlng1    varchar2(1) default ' ' not null,
  pmmmlng2    varchar2(1) default ' ' not null,
  pmmmlng3    varchar2(1) default ' ' not null,
  pmmmlng4    varchar2(1) default ' ' not null,
  pmmmlng5    varchar2(1) default ' ' not null,
  pmmmlng6    varchar2(1) default ' ' not null,
  pmmmlcns    varchar2(1) default ' ' not null,
  pmmmcdat    varchar2(8) default ' ' not null,
  pmmmctim    varchar2(8) default ' ' not null,
  pmmmcuid    varchar2(10) default ' ' not null,
  pmmmudat    varchar2(8) default ' ' not null,
  pmmmutim    varchar2(8) default ' ' not null,
  pmmmuuid    varchar2(10) default ' ' not null,
  pmmmdelf    varchar2(1) default ' ' not null,
  pmmmduid    varchar2(10) default ' ' not null,
  pmmmddte    varchar2(8) default ' ' not null,
  pmmmdtme    varchar2(8) default ' ' not null,
  pmmmdres    varchar2(3) default ' ' not null,
  pmmmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmmsa1 primary key( 
pmmmvisn,
pmmmadat,
pmmmatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
