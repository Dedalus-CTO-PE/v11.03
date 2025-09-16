create table pmsworaf
(
pmwoadmn    varchar2(8),
pmwowdi1    varchar2(35),
pmwowdi2    varchar2(35),
pmwowdi3    varchar2(35),
pmwoedat    varchar2(8),
pmwocdat    varchar2(8),
pmwoctim    varchar2(8),
pmwocuid    varchar2(10),
pmwoudat    varchar2(8),
pmwoutim    varchar2(8),
pmwouuid    varchar2(10),
pmwoedtm    varchar2(8),
pmwodpst    varchar2(3),
pmwocord    varchar2(10),
pmwoddes    varchar2(5),
pmwodtrn    varchar2(8),
pmwoudf1    varchar2(3),
pmwoudf2    varchar2(3),
pmwoudf3    varchar2(3),
pmwoudf4    varchar2(3),
pmwoudf5    varchar2(3),
pmwoudf6    varchar2(3),
pmwoudf7    varchar2(3),
pmwoudf8    varchar2(3),
pmwocext    varchar2(4),
pmwospar    varchar2(46),
lf          varchar2(1),
constraint pmswora1 primary key( 
pmwoadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsworaf for pmsworaf;
create unique index pmswora2 on pmsworaf
(
pmwoedat,
pmwoadmn
)
  tablespace pas_indx; 
