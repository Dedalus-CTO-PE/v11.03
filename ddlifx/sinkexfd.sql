create table sinkexaf
(
sikekwd     char(15),
sikespa     char(20),
lf          char(1)
);
create unique index sinkexa1 on sinkexaf
(
sikekwd
);
revoke all on sinkexaf from public ; 
grant select on sinkexaf to public ; 
