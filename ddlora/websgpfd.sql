create table websgpaf
(
wbsgusid    varchar2(10),
wbsggrpc    varchar2(10),
wbsgspar    varchar2(25),
lf          varchar2(1),
constraint websgpa1 primary key( 
wbsgusid,
wbsggrpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym websgpaf for websgpaf;
create unique index websgpa2 on websgpaf
(
wbsggrpc,
wbsgusid
)
  tablespace pas_indx; 
