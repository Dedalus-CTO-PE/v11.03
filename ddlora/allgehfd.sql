create table allgehaf
(
  algccont    varchar2(8) default ' ' not null,
  algchcpc    varchar2(10) default ' ' not null,
  algcspec    varchar2(3) default ' ' not null,
  algchsta    varchar2(3) default ' ' not null,
  algccdat    varchar2(8) default ' ' not null,
  algcctim    varchar2(8) default ' ' not null,
  algccuid    varchar2(10) default ' ' not null,
  algcudat    varchar2(8) default ' ' not null,
  algcutim    varchar2(8) default ' ' not null,
  algcuuid    varchar2(10) default ' ' not null,
  algcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allgeha1 primary key( 
algccont,
algchcpc,
algcspec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
