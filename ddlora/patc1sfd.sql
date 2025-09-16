create table patc1sad
(
  ptc1date    varchar2(6) default ' ' not null,
  ptc1type    varchar2(3) default ' ' not null,
  ptc1doct    varchar2(6) default ' ' not null,
  ptc1typp    varchar2(1) default ' ' not null,
  ptc1dsch    number(5,0) default 0 not null,
  ptc1tbdy    number(5,0) default 0 not null,
  ptc1pbdy    number(5,0) default 0 not null,
  ptc1spar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patc1sa1 primary key( 
ptc1date,
ptc1type,
ptc1doct,
ptc1typp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
