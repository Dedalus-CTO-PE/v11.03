create table pmscmmaf
(
pmcmcrcd    varchar2(3),
pmcmcacc    varchar2(14),
pmcmspar    varchar2(80),
lf          varchar2(1),
constraint pmscmma1 primary key( 
pmcmcrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmscmmaf for pmscmmaf;
