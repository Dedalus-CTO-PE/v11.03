create table patsecrf
(
secpcod     char(4),
secm        decimal(1,0),
seca        decimal(1,0),
secd        decimal(1,0),
secb        decimal(1,0),
seci        decimal(1,0),
secr        decimal(1,0),
sect        decimal(1,0),
secp        decimal(1,0),
sece        decimal(1,0),
secw        decimal(1,0),
seck        decimal(1,0),
secspar     char(8),
ssecpcod    char(4),
ssecm       decimal(1,0),
sseca       decimal(1,0),
ssecd       decimal(1,0),
ssecb       decimal(1,0),
sseci       decimal(1,0),
ssecr       decimal(1,0),
ssect       decimal(1,0),
ssecp       decimal(1,0),
ssece       decimal(1,0),
ssecw       decimal(1,0),
sseck       decimal(1,0),
lf          char(1)
);
create unique index patsecr1 on patsecrf
(
secpcod
);
revoke all on patsecrf from public ; 
grant select on patsecrf to public ; 
