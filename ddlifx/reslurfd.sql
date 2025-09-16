create table resluraf
(
reluurn     char(8),
relurdt     char(8),
relurtm     char(5),
relurun     char(4),
relumsn     char(1),
relusdt     char(8),
relustm     char(5),
reluspc     char(4),
relufur     char(1),
relupid     char(16),
reluucs     char(12),
reluusc     char(12),
reludss     char(10),
relunor     char(1),
relurty     char(1),
relurst     char(2),
relulab     char(3),
reluspa     char(4),
lf          char(1)
);
create unique index reslura1 on resluraf
(
reluurn,
relurdt,
relurtm,
relurun
);
create unique index reslura2 on resluraf
(
relurdt,
relurtm,
relurun,
reluurn
);
revoke all on resluraf from public ; 
grant select on resluraf to public ; 
